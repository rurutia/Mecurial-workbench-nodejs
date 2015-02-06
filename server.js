var http = require('http');
var fs = require('fs');
var path = require('path');
var util = require('util');

var config = require('./config.js');
var process = require('./process.js');

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

function serveFile(response, filePath) {
    var extname = path.extname(filePath);
    var contentType = 'text/html';
    switch (extname) {
        case '.js':
        contentType = 'text/javascript';
        break;
        case '.css':
        contentType = 'text/css';
        break;
    }

    fs.exists(filePath, function (exists) {

        if (exists) {
            fs.readFile(filePath, function (error, content) {
                if (error) {
                    response.writeHead(500);
                    response.end();
                }
                else {
                    response.writeHead(200, { 'Content-Type': contentType });
                    response.end(content, 'utf-8');
                }
            });
        }
        else {
            response.writeHead(404);
            response.end();
        }
    });

};

http.createServer(function (request, response) {
    var filePath = '.' + request.url;
    if (request.url == '/') {
        filePath = './client/index.html';
        serveFile(response, filePath);
    }
    else if (request.url.indexOf('/hg/in/') > -1)
    {
        console.log(request.url);
        var repoName = request.url.replace('/hg/in/', '');

        var repoDir = config.repoDir + repoName;
        console.log(repoDir);
        var command = "hg -R " + repoDir + " in";

        process.sendReponse(response, command, function(stdout) {
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            var obj = { hasIncomingChange : true };
            for(var e in infoArray) {
                            console.log(infoArray[e]); 

                if(infoArray[e].indexOf('no changes found') > -1) {
                    obj.hasIncomingChange = false;
                }
            }
            return obj;
        });
    }
    else if (request.url.indexOf('/list/') > -1)
    {
        console.log(request.url);
        var repoName = request.url.replace('/list/', '');

        var repoDir = config.repoDir + repoName;
        var command = "hg -R " + repoDir + " log -l 1 -v";

        process.sendReponse(response, command, function(stdout) {
            var infoArray = stdout.replace( /\n/g, "!").split('!');
            var obj = {};
            for(var e in infoArray) {
                var valuePair = infoArray[e].split(": ");
                obj[valuePair[0]] = valuePair[1];
            }
            return obj;
        });
    }
    else if (request.url == '/list')
    {
        var command = "find " + config.repoDir + " -maxdepth 1 -type d";
        process.sendReponse(response, command, function(stdout) {
            var dirArray = stdout.replace( /\n/g, " ");
            var reg = new RegExp(config.repoDir, 'g')
            dirArray = dirArray.replace(reg, "");
            // .replace(/\n/g, '')
            dirArray = dirArray.split( " " );
            console.log(dirArray);
            var newDirArray = _.filter(dirArray, function(elm) {
                if(elm && elm.length > 0) {
                    return true;
                }
            });
            return newDirArray;
        });
    }
    else {
        filePath = './client/' + filePath;
        serveFile(response, filePath);
    }

}).listen(config.port);

console.log('Server running at http://127.0.0.1:' + config.port + '/');