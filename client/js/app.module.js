'use strict';

// Declare app level module which depends on filters, and services
angular.module('IMMecurialApp', ['ngResource'])
  .factory('RepoList', function($resource){
	  return $resource(
			  '/list'
	  );
  })
  .controller('menuCtrl', function($scope, RepoList, $http) {
  	$scope.showRepoDetail = function(repoName) {
  		$http({method: 'GET', url: '/list/' + repoName}).
	  		success(function(data, status, headers, config) {
	  			$scope.singleRepoDetail = data;
	  		}).
	  		error(function(data, status, headers, config) {
	  		});
  	};

  	$http({method: 'GET', url: '/list'}).
	  	success(function(data, status, headers, config) {
	  		$scope.repoList = data;
	  	}).
	  	error(function(data, status, headers, config) {
	  	});

  })
  ;