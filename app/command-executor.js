var exec = require('child_process').exec,
    config = require('../config.json');

function CommandExecutor(command) {
	var self = this;
	var parseConsoleCallback;
	var successCallback;
	var executeConcrete = function() {
		exec(self.command,
			function (error, stdout, stderr) {
				successCallback.call(self, parseConsoleCallback(stdout));
			});
	};

	console.log('Executing command: ' + command);
	this.command = command;
	this.then = function(callback) {
		successCallback = callback;
		executeConcrete();
	};
	this.execute = function(callback) {
		parseConsoleCallback = callback;
		return self;
	};
};   

module.exports = CommandExecutor;