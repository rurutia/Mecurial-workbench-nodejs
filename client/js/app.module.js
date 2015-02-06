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
  		// if($scope.currenRepoName) {
	  	// 	$http({method: 'GET', url: '/hg/in/' + $scope.currenRepoName}).
		  // 		success(function(data, status, headers, config) {
		  // 			alert(data.hasIncomingChange);
		  // 			// $scope.singleRepoDetail = data;
		  // 		}).
		  // 		error(function(data, status, headers, config) {
		  // 		});
  		// }
  		if($scope.repoList) {
  			var flags = {};
  			angular.forEach($scope.repoList, function(value, key) {
  				// flags[key] = true;
  				$('span#check-incoming').html('Check...');
	  			$http({method: 'GET', url: '/hg/in/' + value}).
			   		success(function(data, status, headers, config) {
			   			if(data.hasIncomingChange ) {
			   				value = 'incoming';
			   				$scope.repoList[key] = $scope.repoList[key] + '(incoming)';
			   				console.log(key);
			   				// $('span#check-incoming').html('Check incoming');
			   			}
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
	  	}).
	  	error(function(data, status, headers, config) {
	  	});

  })
  ;