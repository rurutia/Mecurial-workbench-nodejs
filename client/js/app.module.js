'use strict';

// Declare app level module which depends on filters, and services
angular.module('IMMecurialApp', ['ngResource'])
  .factory('RepoList', function($resource){
	  return $resource(
			  '/list'
	  );
  })
  .controller('menuCtrl', function($scope, RepoList, $http) {
  	$scope.fileList = [];
  	$scope.command = {};
  	$scope.branchDiff = {};

  	$scope.ticketsOrderBy = 'number';

  	$scope.updateTicketsOrderBy = function(orderBy) {
  		$scope.ticketsOrderBy = orderBy;
  	};

  	$scope.showHgIn = function() {
  		if($scope.repoList) {
  			var flags = {};
  			angular.forEach($scope.repoList, function(repo) {
  				repo.isLoading = true;
	  			$http({method: 'GET', url: '/hg/in/' + repo.name}).
			   		success(function(data, status, headers, config) {
		   				repo.hasIncomingChange = data.hasIncomingChange;
		   				if(repo.hasIncomingChange) {
		   					repo.info = "has incoming change(s)";
		   				}
		   				else {
		   					repo.info = '';
		   				}
			   			repo.isLoading = false;
			  		}).
			   		error(function(data, status, headers, config) {
			  		});
  			});
  		}

  	};

  	$scope.toggleFileLinkStyle = function(e) {
  		$(e.target).parent().find('a').toggleClass("highlight");
  	};
 

   	$scope.issueCommand = function(e) {
   		if(!e || e.keyCode == 13) {
   			$scope.command.isLoading = true;
	  		$http({
	  			method: 'POST', 
	  			url: '/raw/' + $scope.currentRepoName, 
	  			data: {command: $scope.command.text}
	  		}).
		  		success(function(data, status, headers, config) {
					console.log(data);
					$scope.command.result = data.result;
					$scope.command.isLoading = false;
			  	}).
		  		error(function(data, status, headers, config) {
		  		});  		
   		}
  	};

  	$scope.diffBranches = function() {
   			$scope.command.isLoading = true;
	  		$http({
	  			method: 'POST', 
	  			url: '/diffBranches/' + $scope.currentRepoName, 
	  			data: {branch1: $scope.branchDiff.branch1, branch2: $scope.branchDiff.branch2}
	  		}).
		  		success(function(data, status, headers, config) {
					console.log(data);
					$scope.branchDiff.tickets = data.result;
					$scope.command.isLoading = false;
			  	}).
		  		error(function(data, status, headers, config) {
		  		});  		
  	};

  	

  	$scope.add = function(files) {
  		var selectedFiles = [];
  		if(files){
	  		selectedFiles = $(files).filter(function(i, file) {
	  			if(file.isSelected) {
	  				return file;
	  			}
	  		}); 
	  		if(selectedFiles.length == 0)
	  			return false;
  		}


  		$http({method: 'POST', url: '/add/' + $scope.currentRepoName, data: selectedFiles}).
	  		success(function(data, status, headers, config) {
		  		$http({method: 'GET', url: '/status/' + $scope.currentRepoName}).
			  		success(function(data, status, headers, config) {
			  			$scope.statusMap = data;
			  		}).
			  		error(function(data, status, headers, config) {
			  		});
		  	}).
	  		error(function(data, status, headers, config) {
	  		});  		
  	};

  	$scope.changeCurrentStatus = function(status) {
  		$scope.currentStatus = status;
  	};

  	$scope.showRepoDetail = function(repoName) {
  		$scope.currentRepoName = repoName;
  		$http({method: 'GET', url: '/list/' + repoName}).
	  		success(function(data, status, headers, config) {
	  			$scope.singleRepoDetail = data;
	  		}).
	  		error(function(data, status, headers, config) {
	  		});

	  	$http({method: 'GET', url: '/status/' + repoName}).
	  		success(function(data, status, headers, config) {
	  			$scope.statusMap = data;
	  		}).
	  		error(function(data, status, headers, config) {
	  		});


	  	$http({method: 'GET', url: '/branch/' + repoName}).
	  		success(function(data, status, headers, config) {
	  			$scope.currentBranchName = data[0];
	  		}).
	  		error(function(data, status, headers, config) {
	  		});
  	};

  	$http({method: 'GET', url: '/list'}).
	  	success(function(data, status, headers, config) {
	  		$scope.repoList = data;
	  		angular.forEach($scope.repoList, function(repo){
	  			repo.isLoading = false;
	  			repo.hasIncomingChange  = false
	  		});
	  	}).
	  	error(function(data, status, headers, config) {
	  	});

  })
  ;