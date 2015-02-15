angular.module('menuModule', ['WebService'])
.directive('appMenu', function($http, httpService) {
	return {
		restrict: 'E',
		templateUrl: 'menu/menu.html',
		scope: {
			currentRepo : "="
		},
		link: function(scope, elm, attrs) {
			httpService.getRepositories()
				.success(function(data, status, headers, config) {
					scope.repoList = data;
					angular.forEach(scope.repoList, function(repo){
						repo.isLoading = false;
						repo.hasIncomingChange  = false;
						httpService.getRepositoryBranch(repo.name)
							.success(function(data) {
								repo.branch = data;
							});
					});
				}).
				error(function(data, status, headers, config) {
				});


				scope.getRepoDetail = function(repo) {
					scope.currentRepo = repo;

					httpService.getRepositoryLogs(repo.name).
						success(function(data, status, headers, config) {
							scope.currentRepo.branch.logs = data;
						}).
						error(function(data, status, headers, config) {
						});


					httpService.getRepositoryStatus(repo.name).
						success(function(data, status, headers, config) {
							scope.currentRepo.statusMap = data;
							angular.forEach(scope.currentRepo.statusMap, function(fileList, status) {
								var commitStatus = null;
								if(status.indexOf('Modified') > -1)
									commitStatus = 'M';
								else if(status.indexOf('Added') > -1)
									commitStatus = 'A';
								else if(status.indexOf('Removed') > -1)
									commitStatus = 'R';

								if(commitStatus) {
									angular.forEach(fileList, function(file) {
										scope.currentRepo.commitMsg += '\n' + commitStatus + ' ' + file.name;
									});
								}
							});
						}).
						error(function(data, status, headers, config) {
						});

				};

				scope.getSourceChange = function() {
					angular.forEach(scope.repoList, function(repo) {
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

				};



		}
	};
});