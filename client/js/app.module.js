'use strict';

// Declare app level module which depends on filters, and services
angular.module('IMMecurialApp', ['ngResource', 'menuModule'])
  .factory('RepoList', function($resource){
	  return $resource(
			  '/list'
	  );
  })
  .controller('mainCtrl', function($scope, RepoList, $http) {
  	$scope.currentRepo = {};

  	$scope.currentRepo.commitMsg = "#Ticket-\n---\nFunctional requirement:\n\n\n---\nSolution:\n\n\n---\nCode notes:";

  	$scope.fileList = [];
  	$scope.command = {};
  	$scope.branchDiff = {};

  	$scope.ticketsOrderBy = 'number';

  	$scope.updateTicketsOrderBy = function(orderBy) {
  		$scope.ticketsOrderBy = orderBy;
  	};


  	$scope.toggleFileLinkStyle = function(e) {
  		$(e.target).parent().find('a').toggleClass("highlight");
  	};

  	$scope.commit = function() {
  		console.log($scope.currentRepo.commitMsg);
  		$http({
  			method: 'POST', 
  			url: '/commit/' + $scope.currentRepo.name, 
  			data: {message: $scope.currentRepo.commitMsg}
  		}).
	  		success(function(data, status, headers, config) {
	  			console.log(data);


					$http({method: 'GET', url: '/list/' + $scope.currentRepo.name}).
						success(function(data, status, headers, config) {
							$scope.currentRepo.log = data;
						}).
						error(function(data, status, headers, config) {
						});

	  		}).
	  		error(function(data, status, headers, config) {
	  		});  
  	};
 

   	$scope.issueCommand = function(e) {
   		if(!e || e.keyCode == 13) {
   			$scope.command.isLoading = true;
	  		$http({
	  			method: 'POST', 
	  			url: '/raw/' + $scope.currentRepo.name, 
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
	  			url: '/diffBranches/' + $scope.currentRepo.name, 
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


  		$http({method: 'POST', url: '/add/' + $scope.currentRepo.name, data: selectedFiles}).
	  		success(function(data, status, headers, config) {
		  		$http({method: 'GET', url: '/status/' + $scope.currentRepo.name}).
			  		success(function(data, status, headers, config) {
			  			$scope.currentRepo.statusMap = data;
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



  })
  ;