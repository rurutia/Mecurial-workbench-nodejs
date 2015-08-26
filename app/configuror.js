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

	console.log("Loading [links] csv files...");
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
			    var list = [];

			    for(var i=0;i<lines.length;i++) {
			        columns = lines[i].split(",");
			        if(i===0) {
			    		for(var j=0;j<columns.length;j++) {
			    			keys.push(columns[j]);
			    		}
			        }
			        else {
			        	obj = {};
			        	for(var j=0;j<columns.length;j++) {
			    			obj[keys[j]] = columns[j];
			    		}
		    			list.push(obj);
			        }
			    }
			    that.links[name] = list;
			})
	    });
	});
};

module.exports = configuror;