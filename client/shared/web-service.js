'use strict';

angular.module('WebService', [])
.service('httpService', function($http) {

	this.getRepositories = function() {
		return $http({method: 'GET', url: '/repositories'});
	};

	this.getRepositoryBranch = function(name) {
		return $http({method: 'GET', url: '/repository/branch/' + name});
	};

});
