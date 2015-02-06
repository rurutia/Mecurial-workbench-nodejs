var exec = require('child_process').exec,
    config = require('./config.js'),
    child;

   

var process = {
	sendReponse: function(response, command, getResponse) {
		child = exec(command,
          function (error, stdout, stderr) {

			var responseObj = getResponse(stdout);

            response.writeHead(200, {"Content-Type": "application/json"});
            var json = JSON.stringify(responseObj);

            response.end(json);

          });
	}
}

module.exports = process;