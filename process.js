var exec = require('child_process').exec,
    config = require('./config.json');

function CommandExecutor() {
	var self = this;
	var command, parseConsole;
	var successCallback;
	var executeConcrete = function() {
		exec(command,
			function (error, stdout, stderr) {
				successCallback.call(self, parseConsole(stdout));
			});
	};

	this.then = function(arg1) {
		successCallback = arg1;
		executeConcrete();
	};
	this.execute = function(arg1, arg2) {
		command = arg1;
		parseConsole = arg2;
		return self;
	};
};   

module.exports = new CommandExecutor();