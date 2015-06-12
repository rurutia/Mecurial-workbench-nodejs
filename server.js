var http = require('http');
var fs = require('fs');
var path = require('path');
var util = require('util');


var config = require('./config.json');

var _ = require('./app/utility/myu-underscore.js');
var commandExecutor = require('./app/command-executor.js');

// load system configuration and resources
var configuror = require('./app/configuror.js');
configuror.initConfig();

// BASE SETUP
// =============================================================================

// call the packages we need
var express    = require('express');        // call express
var app        = express();                 // define our app using express
var bodyParser = require('body-parser');
var cookieParser = require('cookie-parser');

// configure app to use bodyParser()
// this will let us get the data from a POST
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());
app.use(cookieParser('my super secret sign key'));

var servestatic = require('serve-static');
app.use('/test', servestatic(__dirname + '/public'))
.listen(4000);

var port = config.port;        // set our port

// ROUTES FOR OUR API
// =============================================================================
var router = express.Router();              // get an instance of the express Router

// middleware to use for all requests
router
.use(function(req, res, next) {
    // do logging
    console.log('url: ' + req.url);
    console.log('---client request cookies header:\n', req.headers['cookie']);
    next(); 
})
.use(express.static(__dirname + '/client'))
;


router.get('/repositories', function(req, res) {
    // res.clearCookie('name');
    res.cookie('name3', 'foo', {"signed":"true"});
    // res.cookie('name2', 'foo2');


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

            return {result: repoList, command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});


router.get('/repository/branch/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " branch";
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            return {name: infoArray[0], command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/repository/log/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " log -l 1";
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            var infoArray = stdout.replace( /\n/g, "!").split('!');
            var list = [];
            var obj = {};
            for(var e in infoArray) {
                var valuePair = infoArray[e].split(": ");
                obj[valuePair[0]] = valuePair[1];
            }
            list.push(obj);
            return {result: list, command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/repository/status/:name', function(req, res) {
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

            return {result: statusCodeFileList, command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.get('/hg/in-out/:direction/:name', function(req, res) {
        var repoName = req.params.name;
        var direction = req.params.direction;
        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " " + direction;

        var ce = new commandExecutor(command);

        ce.execute(function(stdout) {
            var infoArray = stdout.split(/\n/);
            var obj = { commits: [] };
            var commit = {};
            for(var i in infoArray) {
                var line = infoArray[i];
                if(line.indexOf('no changes found') > -1) {
                    return {};
                }
                else {
                    if(line) {
                        key = line.split(":")[0];
                        value = line.split(":")[1];
                        if(key && key.indexOf("comparing") === -1 && key.indexOf("searching for changes") === -1) {
                            commit[key] = value ? value.trim() : "";
                        }
                    }
                    else {
                        if(Object.keys(commit).length) {
                            obj.commits.push(commit);
                        }
                        commit = {};
                    }
                }
            }
            return obj;
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
            return {command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.post('/forget/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;

        var command = "hg -R " + repoDir + " forget";
        var files = Array.prototype.slice.call(req.body);
        for(var i in files) {
            var file = files[i]['name'];
            command += " " + repoDir + "/" + file;
        }
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            return {command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.post('/revert/:name', function(req, res) {
        var repoName = req.params.name;
        var repoDir = config.repoDir + repoName;

        var command = "hg -R " + repoDir + " revert";
        var files = Array.prototype.slice.call(req.body);
        for(var i in files) {
            var file = files[i]['name'];
            command += " " + repoDir + "/" + file;
        }
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            return {command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});

router.post('/jira/any', function(req, response) {
    console.log(req.body);
    var data = req.body;


    var https = require('https');

    var username = 'myu';
    var password = 'haoyu0726!';
    var auth = 'Basic ' + new Buffer(username + ':' + password).toString('base64');

      

    var options = {
      host: data.host,
      path: data.context + data.api,
      headers: {
        'Authorization': auth
      }
    };

    var req1 = https.get(options, function(res) {
      console.log('STATUS: ' + res.statusCode);
      console.log('HEADERS: ' + JSON.stringify(res.headers));

      // Buffer the body entirely for processing as a whole.
      var bodyChunks = [];
      res.on('data', function(chunk) {
        // You can process streamed parts here...
        bodyChunks.push(chunk);
      }).on('end', function() {
        var body = Buffer.concat(bodyChunks);
        console.log(JSON.parse(body));
        // ...and/or process the entire body here.
        response.json(JSON.parse(body));
      })
    });

    req1.on('error', function(e) {
      console.log('ERROR: ' + e.message);
    });

});

router.get('/config/:name', function(req, res) {
        var configName = req.params.name;
        res.json(configuror[configName]);
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

router.post('/commit/:name', function(req, res) {
    var repoName = req.params.name;
    var repoDir = config.repoDir + repoName;

    var data = req.body;
    var fs = require('fs');
    var filePath = config.repoDir + repoName + '/temp.txt';
    var wstream = fs.createWriteStream(filePath);
    wstream.write(data.message);
    wstream.end();

    var command = "hg -R " + repoDir + " commit -l " + filePath;

    var ce = new commandExecutor(command);
    ce.execute(function(stdout) {
        console.log(stdout);
        fs.unlinkSync(filePath);
        return {};
    }).then(function(consoleObj) {
        console.log(consoleObj);
        res.json({result: consoleObj});
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

router.get('/file/:repoName', function(req, res) {
        if(req.params && req.params.repoName && req.query && req.query.fileName) {
            var repoDir = config.repoDir + req.params.repoName;
            // TODO replace 'backslash' with normal flash for linux...must be better way
            var fileName = req.query.fileName.replace(/\\/, "/");
            console.log(fileName);
            var command = "less " + repoDir + "/" + fileName;
        }
        var ce = new commandExecutor(command);
        ce.execute(function(stdout) {
            return {content: stdout, command: command};
        }).then(function(consoleObj) {
            res.json(consoleObj);
        });
});


// REGISTER OUR ROUTES -------------------------------
// all of our routes will be prefixed with /api
app.use('/', router);

// START THE SERVER
// =============================================================================
app.listen(port);

console.log('Server running at http://127.0.0.1:' + config.port + '/');