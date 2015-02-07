'use strict';

// Declare app level module which depends on filters, and services
angular.module('IMMecurialApp', ['ngResource'])
  .factory('RepoList', function($resource){
	  return $resource(
			  '/list'
	  );
  })
  .controller('menuCtrl', function($scope, RepoList, $http) {
  	$scope.showHgIn = function() {

  		if($scope.repoList) {
  			var flags = {};
  			angular.forEach($scope.repoList, function(repo) {
  				// flags[key] = true;
  				$('span#check-incoming').html('Check...');
  				repo.isLoading = true;
	  			$http({method: 'GET', url: '/hg/in/' + repo.name}).
			   		success(function(data, status, headers, config) {
			   			if(data.hasIncomingChange ) {
			   				repo.name = repo.name + '(incoming)';
			   			}
			   			repo.isLoading = false;
			  		}).
			   		error(function(data, status, headers, config) {
			  		});
  			});
  		}

  	};

  	$scope.showRepoDetail = function(repoName) {
  		$scope.currenRepoName = repoName;
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
	  		angular.forEach($scope.repoList, function(repo){
	  			repo.isLoading = false;
	  		});
	  	}).
	  	error(function(data, status, headers, config) {
	  	});

  })
  ;