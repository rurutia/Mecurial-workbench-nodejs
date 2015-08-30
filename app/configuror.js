var configuror = {
	commitTemplates : [],
	links: {}
}
fs = require('fs');

configuror.initConfig = function() {
	console.log("Loading init config...");
	var that = this; 

    console.log("Loading [hg commit] templates...");
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

	console.log("Loading headings of [links] csv files...");
	var dirLinksFiles = __dirname + '/data/links/';
	fs.readdir(dirLinksFiles ,function(err,files) {
	    if (err) throw err;
	    files.forEach(function(file){
	    	console.log(file);
	    	var name = file.split('.')[0];
			fs.readFile(dirLinksFiles + file, function(err, data) {
			    if(err) {
			        throw err;
			    }
			    var lines = data.toString().split(/\r?\n/);
			    var keys = [];

			    for(var i=0;i<lines.length;i++) {
			        columns = lines[i].split(",");
			        if(i===0) {
			    		for(var j=0;j<columns.length;j++) {
			    			if(columns[j] === "id") {
			    				keys.unshift(columns[j]);
			    			}
			    			else {
			    				keys.push(columns[j]);
			    			}
			    		}
			        }
			    }
			    that.links[name] = keys;
			})
	    });
	});
};

module.exports = configuror;