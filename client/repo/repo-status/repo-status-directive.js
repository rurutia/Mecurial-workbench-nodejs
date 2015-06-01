define(['repo'], function(repo) {
	repo.directive("repoStatus", function(httpService) {
		return {
			restrict: "E",
			scope: {
				'currentRepo': '='
			},
			templateUrl: "repo/repo-status/repo-status.html",
			link: function(scope, elm, attrs) {
				scope.changeCurrentStatus = function(status) {
					scope.currentStatus = status;
				};
			}
		};
	});

	// child directive for each status (e.g. A, M, Delete ...)
	repo.directive('repoSingleStatus', function(httpService) {
		return {
			restrict: 'E',
			templateUrl: 'repo/repo-status/repo-single-status.html',
			scope: {
				"status" : "=",
				"files" : "=",
				"currentRepo" : "="
			},
			link: function(scope, elm, attrs) {
				if(scope.status.indexOf('? - Unknown') > -1) {
					scope.statusAction = 'add';
				}
				else if(scope.status.indexOf('A - Added') > -1) {
					scope.statusAction = 'forget';
				}
				else if(scope.status.indexOf('M - Modified') > -1) {
					scope.statusAction = 'revert';
				}
				else if(scope.status.indexOf('! - Deleted') > -1) {
					scope.statusAction = 'revert';
				}
				else if(scope.status.indexOf('R - Removed') > -1) {
					scope.statusAction = 'revert';
				}

				scope.displayFile = function(fileName) {
					httpService.getFileContent(
						scope.currentRepo.name,
						{fileName : fileName},
						function(data, status, headers, config) {
							console.log(data);
							// TODO: use popup window to display content
							if(data.content) {
								alert(data.content);
							}
						}
					);
				};

				scope.action = function(action, status, isAll) {
					var files = scope.currentRepo.statusMap[status];

					var selectedFiles = [];
					if(isAll){
						selectedFiles = files;
					}
					else {
						selectedFiles = $(files).filter(function(i, file) {
							if(file.isSelected) {
								return file;
							}
						}); 
						if(selectedFiles.length == 0)
							return false;        
					}

					var successCallback = function(data, status, headers, config) {
						httpService.getRepositoryStatus(
								scope.currentRepo.name, 
								function(data, status, headers, config) {
									scope.currentRepo.statusMap = data.result;
								}
							);
					};

					switch(action) {
						case 'add':
						httpService.addFiles(
							scope.currentRepo.name, 
							Array.prototype.slice.call(selectedFiles),
							successCallback
							);
						break;

						case 'forget':
						httpService.forgetFiles(
							scope.currentRepo.name, 
							Array.prototype.slice.call(selectedFiles),
							successCallback
							);
						break;

						case 'revert':
						httpService.revertFiles(
							scope.currentRepo.name, 
							Array.prototype.slice.call(selectedFiles),
							successCallback
							);
						break;
					}

				};
			}
		};
	});

});