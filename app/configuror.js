var configuror = {commitTemplates : []}
    fs = require('fs');

configuror.initConfig = function() {
	console.log("Loading init config...");
	var that = this; 

    console.log("Loading hg commit templates...");
	var dirCommitTemplates = __dirname + '/data/templates/hg_commit/';
	fs.readdir(dirCommitTemplates ,function(err,files) {
	    if (err) throw err;
	    files.forEach(function(file){
	    	console.log(file);
	    	var name = file.split('.')[0];
			fs.readFile(dirCommitTemplates + file, function(err, data) {
			    if(err) {
			        throw err;
			    }
			    that.commitTemplates.push( {
			        name: name,
			        content: data.toString()
			    });
			})
	    });
	});
};

module.exports = configuror;