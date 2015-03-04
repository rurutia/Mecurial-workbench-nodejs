angular.module('repoModule', ['WebService'])
.controller('repoCtrl', function($scope, $stateParams, RepoList, $http, $rootScope, httpService) {
	$scope.currentRepo = {branch: {}};
	
	$scope.currentRepo.name = $stateParams.name;

	$scope.currentRepo.branch.name = $stateParams.branchName;

  	$scope.currentRepo.commitMsg = "#Ticket-\n---\nFunctional requirement:\n\n\n---\nSolution:\n\n\n---\nCode notes:";

  	$scope.fileList = [];
  	$scope.command = {};
  	$scope.branchDiff = {};

  	$scope.ticketsOrderBy = 'number';

  	httpService.getRepositoryLogs(
  		$scope.currentRepo.name, 
  		function(data, status, headers, config) {
  			$scope.currentRepo.branch.logs = data.result;
  		}
  	);


  	httpService.getRepositoryStatus(
  		$scope.currentRepo.name,
  		function(data, status, headers, config) {
  			$scope.currentRepo.statusMap = data.result;
  			angular.forEach($scope.currentRepo.statusMap, function(fileList, status) {
  				var commitStatus = null;
  				if(status.indexOf('Modified') > -1)
  					commitStatus = 'M';
  				else if(status.indexOf('Added') > -1)
  					commitStatus = 'A';
  				else if(status.indexOf('Removed') > -1)
  					commitStatus = 'R';

  				if(commitStatus) {
  					angular.forEach(fileList, function(file) {
  						$scope.currentRepo.commitMsg += '\n' + commitStatus + ' ' + file.name;
  					});
  				}
  			});
  		}
  		);

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
		  		$http({method: 'GET', url: '/repository/status/' + $scope.currentRepo.name}).
			  		success(function(data, status, headers, config) {
			  			$scope.currentRepo.statusMap = data.result;
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

}); 