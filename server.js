var http = require('http');
var fs = require('fs');
var path = require('path');
var util = require('util');

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

        var exec = require('child_process').exec,
        child;

        var repoDir = '/home/myu/repositories/' + repoName;
        console.log(repoDir);
        child = exec("hg -R " + repoDir + " in",

          function (error, stdout, stderr) {
            console.log(stdout); 
            
            var infoArray = stdout.replace( /\n/g, "%").split('%');
            var obj = { hasIncomingChange : true };
            for(var e in infoArray) {
                            console.log(infoArray[e]); 

                if(infoArray[e].indexOf('no changes found') > -1) {
                    obj.hasIncomingChange = false;
                }
            }
            // console.log(newDirArray);
            response.writeHead(200, {"Content-Type": "application/json"});
            var json = JSON.stringify(obj);
            
            console.log(json);
            response.end(json);


            if (error !== null) {
              console.log('exec error: ' + error);
          }

      });
    }
    else if (request.url.indexOf('/list/') > -1)
    {
        console.log(request.url);
        var repoName = request.url.replace('/list/', '');

        var exec = require('child_process').exec,
        child;

        var repoDir = '/home/myu/repositories/' + repoName;
        child = exec("hg -R " + repoDir + " log -l 1 -v",

          function (error, stdout, stderr) {
            var infoArray = stdout.replace( /\n/g, "!").split('!');
            var obj = {};
            for(var e in infoArray) {
                var valuePair = infoArray[e].split(": ");
                obj[valuePair[0]] = valuePair[1];
            }
            // console.log(newDirArray);
            response.writeHead(200, {"Content-Type": "application/json"});
            var json = JSON.stringify(obj);
            
            console.log(json);
            response.end(json);


            if (error !== null) {
              console.log('exec error: ' + error);
          }

      });
    }
    else if (request.url == '/list')
    {
        var exec = require('child_process').exec,
        child;

        var repoDir = '/home/myu/repositories/';
        child = exec("find " + repoDir + " -maxdepth 1 -type d",
          function (error, stdout, stderr) {
            var dirArray = stdout.replace( /\n/g, " ");
            var reg = new RegExp(repoDir, 'g')
            dirArray = dirArray.replace(reg, "");
            // .replace(/\n/g, '')
            dirArray = dirArray.split( " " );
            console.log(dirArray);
            var newDirArray = _.filter(dirArray, function(elm) {
                if(elm && elm.length > 0) {
                    return true;
                }
            });
            // console.log(newDirArray);
            response.writeHead(200, {"Content-Type": "application/json"});
            var json = JSON.stringify(newDirArray);
            // console.log(json);
            response.end(json);


            if (error !== null) {
              console.log('exec error: ' + error);
            }
          });
    }
    else {
        filePath = './client/' + filePath;
        serveFile(response, filePath);
    }

    // var extname = path.extname(filePath);
    // var contentType = 'text/html';
    // switch (extname) {
    //     case '.js':
    //         contentType = 'text/javascript';
    //         break;
    //     case '.css':
    //         contentType = 'text/css';
    //         break;
    // }

    // fs.exists(filePath, function (exists) {

    //     if (exists) {
    //         fs.readFile(filePath, function (error, content) {
    //             if (error) {
    //                 response.writeHead(500);
    //                 response.end();
    //             }
    //             else {
    //                 response.writeHead(200, { 'Content-Type': contentType });
    //                 response.end(content, 'utf-8');
    //             }
    //         });
    //     }
    //     else {
    //         response.writeHead(404);
    //         response.end();
    //     }
    // });

}).listen(3000);
console.log('Server running at http://127.0.0.1:3000/');