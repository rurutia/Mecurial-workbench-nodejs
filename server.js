var http = require('http');
var fs = require('fs');
var path = require('path');
var util = require('util');

var config = require('./config.json');
var _ = require('./app/utility/myu-underscore.js');
var commandExecutor = require('./app/command-executor.js');

// server.js

// BASE SETUP
// =============================================================================

// call the packages we need
var express    = require('express');        // call express
var app        = express();                 // define our app using express
var bodyParser = require('body-parser');

// configure app to use bodyParser()
// this will let us get the data from a POST
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

var port = config.port        // set our port

// ROUTES FOR OUR API
// =============================================================================
var router = express.Router();              // get an instance of the express Router

// middleware to use for all requests
router
.use(function(req, res, next) {
    // do logging
    console.log('url: ' + req.url);
    next(); 
})
.use(express.static(__dirname + '/client'))
;

router.get('/list', function(req, res) {
        var command = "find " + config.repoDir + " -maxdepth 1 -type d";
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var fileList = stdout.replace( /\n/g, " ");
            var reg = new RegExp(config.repoDir, 'g')
            fileList = fileList.replace(new RegExp(config.repoDir, 'g'), "");
            fileList = fileList.split( " " );

            var repoList = _.mapObject(fileList, 'name', function(file) {
                if(file && file.length > 0) {
                    var hgFullPath = config.repoDir + file + '/.hg';
                    if (fs.existsSync(hgFullPath)) {
                        return true;
                    }
                }
            });

            return repoList;
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/hg/in/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " in";

        var ce = new commandExecutor(command);

        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            var obj = { hasIncomingChange : true };
            for(var e in infoArray) {
                if(infoArray[e].indexOf('no changes found') > -1) {
                    obj.hasIncomingChange = false;
                }
            }
            return obj;
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/list/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " log -l 1 -v";
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "!").split('!');
            var obj = {};
            for(var e in infoArray) {
                var valuePair = infoArray[e].split(": ");
                obj[valuePair[0]] = valuePair[1];
            }
            return obj;
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/branch/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " branch";
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            return infoArray;
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/status/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " status";
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            var infoArrayNoBlank = _.filter(infoArray, function(elm) {
                if(elm && elm.length > 0) {
                    return true;
                }
            });

            var statusCodeFileList = _.mapStatusObject(infoArray, function(elm) {
                if(elm && elm.length > 0) {
                    return true;
                }
            });

            return statusCodeFileList;
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.post('/add/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;

        var command = "hg -R " + repoDir + " add";
        var files = Array.prototype.slice.call(req.body);
        for(var i in files) {
            var file = files[i]['name'];
            command += " " + repoDir + "/" + file;
        }
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            return infoArray;
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.post('/raw/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;

        var rawCommand = req.body;
        var command = "hg -R " + repoDir + " " + rawCommand.command;

        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            console.log(stdout);
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            var resultStr = ''
            for(var e in infoArray) {
                resultStr += infoArray[e] + '\n';
            }
            return resultStr;
        }).then(function(consoleObj) {
            console.log(consoleObj);
            res.json({result: consoleObj});
        });
});

router.post('/diffBranches/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;

        var branch1 = req.body.branch1;
        var branch2 = req.body.branch2;
        console.log(branch1);
        console.log(branch2);
        var command = repoDir + "/hg_diffs.sh" + " " + branch1 + " " + branch2;
        console.log(command);

        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            console.log(stdout);
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            
            var tickets = [];
            for(var e in infoArray) {
                if(infoArray[e].indexOf('---') > -1) {
                    var parts = infoArray[e].split('---');
                    var ticketNum = parts[0];
                    var description = parts[1];
                    var assignee = parts[2];
                    tickets.push({number: ticketNum, description: description, assignee: assignee});
                    
                }
            }

            return tickets;
        }).then(function(consoleObj) {
            console.log(consoleObj);
            res.json({result: consoleObj});
        });
});


// REGISTER OUR ROUTES -------------------------------
// all of our routes will be prefixed with /api
app.use('/', router);

// START THE SERVER
// =============================================================================
app.listen(port);

console.log('Server running at http://127.0.0.1:' + config.port + '/');