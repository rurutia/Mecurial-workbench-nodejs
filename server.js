var http = require('http');
var fs = require('fs');
var path = require('path');
var util = require('util');

var config = require('./config.json');
var process = require('./process.js');

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
    next(); // make sure we go to the next routes and don't stop here
})
.use(express.static(__dirname + '/client'))
;

router.get('/list', function(req, res) {
        var command = "find " + config.repoDir + " -maxdepth 1 -type d";
        process.execute(command, function(stdout) {
            var dirArray = stdout.replace( /\n/g, " ");
            var reg = new RegExp(config.repoDir, 'g')
            dirArray = dirArray.replace(reg, "");
            dirArray = dirArray.split( " " );

            var repoList = _.mapObject(dirArray, 'name', function(dir) {
                if(dir && dir.length > 0) {
                    var fullPath = config.repoDir + dir + '/.hg';
                    if (fs.existsSync(fullPath)) {
                        return true;
                    }

                }
            });

            return repoList;
        }).then(function(responseObj) {
            res.json(responseObj);
        });
    
});

// more routes for our API will happen here

// REGISTER OUR ROUTES -------------------------------
// all of our routes will be prefixed with /api
app.use('/', router);

// START THE SERVER
// =============================================================================
app.listen(port);



var _ = {};
_.filter = function(arr, callback) {
    var newArr = [];
    for(var e in arr) {
        console.log(arr[e]);
        if(callback(arr[e])) {
            newArr.push(arr[e]);
        }
    }
    return newArr;
}; 


_.mapObject = function(arr, key, callback) {
    var newArr = [];
    for(var e in arr) {
        if(callback(arr[e])) {
            var obj = {};
            obj[key] = arr[e];
            newArr.push(obj);
        }
    }
    return newArr;
}; 

// var STATUS_CODE_DESCRIPTION_MAP = {
//     '!' : 'Deleted(but tracked)',
//     '?' : 'Unknown',
//     'A' : 'Added',
//     'M' : 'Modified',
//     'R' : 'Removed'
// };

// _.mapStatusObject = function(arr, checkEmpty) {
//     var newArr = {};
//     for(var e in arr) {
//         var row = arr[e];
//         if(checkEmpty(row)) {
//             var pieces = row.split(" ");
//             var code = pieces[0] + " - " + STATUS_CODE_DESCRIPTION_MAP[pieces[0]];
//             var file = pieces[1];
//             if(!newArr[code]) {
//                 newArr[code] = [];
//             }
//             newArr[code].push({'name': file});
//         }
//     }
//     return newArr;
// }; 

// function serveFile(response, filePath) {
//     var extname = path.extname(filePath);
//     var contentType = 'text/html';
//     switch (extname) {
//         case '.js':
//         contentType = 'text/javascript';
//         break;
//         case '.css':
//         contentType = 'text/css';
//         break;
//     }

//     fs.exists(filePath, function (exists) {

//         if (exists) {
//             fs.readFile(filePath, function (error, content) {
//                 if (error) {
//                     response.writeHead(500);
//                     response.end();
//                 }
//                 else {
//                     response.writeHead(200, { 'Content-Type': contentType });
//                     response.end(content, 'utf-8');
//                 }
//             });
//         }
//         else {
//             response.writeHead(404);
//             response.end();
//         }
//     });

// };

// http.createServer(function (request, response) {
//     var filePath = '.' + request.url;
//     if (request.url == '/') {
//         filePath = './client/index.html';
//         serveFile(response, filePath);
//     }

//     else if (request.url.indexOf('/raw/') > -1)
//     {
//         console.log(request.url);
//         var repoName = request.url.replace('/raw/', '');

//         var body = '';
//         request.on('data', function (data) {
//             body += data;
//         });
//         request.on('end', function () {
//             console.log("-----------");
//             console.log(body);
//             var repoDir = config.repoDir + repoName;
//             var command = "hg -R " + repoDir + " " + body;

//             console.log(command);
//             process.sendReponse(response, command, function(stdout) {
//                 var result = {result: stdout};
//                 return result;
//             });
//         });

//     }

//     else if (request.url.indexOf('/add/') > -1)
//     {
//         console.log(request.url);
//         var repoName = request.url.replace('/add/', '');

//         var body = '';
//         request.on('data', function (data) {
//             body += data;
//         });
//         request.on('end', function () {
//             var files = Array.prototype.slice.call(JSON.parse(body));
//             console.log("-----------");
//             console.log(files);
//             var repoDir = config.repoDir + repoName;
//             var command = "hg -R " + repoDir + " add";
//             for(var i in files) {
//                 var file = files[i]['name'];
//                 command += " " + repoDir + "/" + file;
//             }
//             console.log(command);
//             process.sendReponse(response, command, function(stdout) {
//                 var infoArray = stdout.replace( /\n/g, "%").split('%');
//                 return infoArray;
//             });
//         });

//     }
//     // else if (request.url.indexOf('/addAll/') > -1)
//     // {
//     //     console.log(request.url);
//     //     var repoName = request.url.replace('/addAll/', '');

//     //     var repoDir = config.repoDir + repoName;
//     //     var command = "hg -R " + repoDir + " add " + repoDir + "/.";

//     //     process.sendReponse(response, command, function(stdout) {
//     //         var infoArray = stdout.replace( /\n/g, "%").split('%');
//     //         return infoArray;
//     //     });
//     // }
//     else if (request.url.indexOf('/branch/') > -1)
//     {
//         console.log(request.url);
//         var repoName = request.url.replace('/branch/', '');

//         var repoDir = config.repoDir + repoName;
//         var command = "hg -R " + repoDir + " branch";

//         process.sendReponse(response, command, function(stdout) {
//             var infoArray = stdout.replace( /\n/g, "%").split('%');
//             return infoArray;
//         });
//     }
//     else if (request.url.indexOf('/status/') > -1)
//     {
//         console.log(request.url);
//         var repoName = request.url.replace('/status/', '');

//         var repoDir = config.repoDir + repoName;
//         var command = "hg -R " + repoDir + " status";

//         process.sendReponse(response, command, function(stdout) {
//             var infoArray = stdout.replace( /\n/g, "%").split('%');
//             var infoArrayNoBlank = _.filter(infoArray, function(elm) {
//                 if(elm && elm.length > 0) {
//                     return true;
//                 }
//             });

//             var statusCodeFileList = _.mapStatusObject(infoArray, function(elm) {
//                 if(elm && elm.length > 0) {
//                     return true;
//                 }
//             });

//             console.log(statusCodeFileList);
//             return statusCodeFileList;
//         });
//     }
//     else if (request.url.indexOf('/hg/in/') > -1)
//     {
//         console.log(request.url);
//         var repoName = request.url.replace('/hg/in/', '');

//         var repoDir = config.repoDir + repoName;
//         console.log(repoDir);
//         var command = "hg -R " + repoDir + " in";

//         process.sendReponse(response, command, function(stdout) {
//             var infoArray = stdout.replace( /\n/g, "%").split('%');
//             var obj = { hasIncomingChange : true };
//             for(var e in infoArray) {
//                             console.log(infoArray[e]); 

//                 if(infoArray[e].indexOf('no changes found') > -1) {
//                     obj.hasIncomingChange = false;
//                 }
//             }
//             return obj;
//         });
//     }
//     else if (request.url.indexOf('/list/') > -1)
//     {
//         console.log(request.url);
//         var repoName = request.url.replace('/list/', '');

//         var repoDir = config.repoDir + repoName;
//         var command = "hg -R " + repoDir + " log -l 1 -v";

//         process.sendReponse(response, command, function(stdout) {
//             var infoArray = stdout.replace( /\n/g, "!").split('!');
//             var obj = {};
//             for(var e in infoArray) {
//                 var valuePair = infoArray[e].split(": ");
//                 obj[valuePair[0]] = valuePair[1];
//             }
//             return obj;
//         });
//     }
//     else if (request.url == '/list')
//     {
//         var command = "find " + config.repoDir + " -maxdepth 1 -type d";
//         process.sendReponse(response, command, function(stdout) {
//             var dirArray = stdout.replace( /\n/g, " ");
//             var reg = new RegExp(config.repoDir, 'g')
//             dirArray = dirArray.replace(reg, "");
//             dirArray = dirArray.split( " " );

//             var repoList = _.mapObject(dirArray, 'name', function(dir) {
//                 if(dir && dir.length > 0) {
//                     var fullPath = config.repoDir + dir + '/.hg';
//                     if (fs.existsSync(fullPath)) {
//                         return true;
//                     }

//                 }
//             });

//             console.log(repoList);
//             return repoList;
//         });
//     }
//     else {
//         filePath = './client/' + filePath;
//         serveFile(response, filePath);
//     }

// }).listen(config.port);

console.log('Server running at http://127.0.0.1:' + config.port + '/');