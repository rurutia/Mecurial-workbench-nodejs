'use strict';

define(['angular'], function(angular) {
	angular.module('filters', [])
		.filter('keys', function() {
		    return function(input) {
		      if (!input) {
		        return [];
		      }
		      var keys = Object.keys(input);
		      for(var i=keys.length-1;i>=0;i--) {
		        if(keys[i].indexOf('$$') > -1) {
		          keys.splice(i, 1);
		        }
		      }
		      return keys;
		    }
	  });
});
