define(['angular'], function(angular) {
	angular.module('repoStatusModule', ['WebService'])
	.directive("repoStatus", function(httpService) {
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
			// ,
			// controller: function(scope) {
			// 	console.log(scope.currentRepo);
			// }
		};
	});	
});