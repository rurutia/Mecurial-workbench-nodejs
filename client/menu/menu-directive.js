angular.module('menuModule', ['WebService'])
.directive('appMenu', function($http, $timeout, httpService) {
	return {
		restrict: 'E',
		templateUrl: 'menu/menu.html',
		scope: {
			currentRepo: '='
		},
		link: function(scope, elm, attrs) {
			httpService.getRepositories(
				function(data, status, headers, config) {
					scope.repoList = data.result;
					scope.allRepoList = data.result;

					$timeout(function(){
						$("#multiselectid").chosen({
							no_results_text: "Oops, nothing found!",
							width: "60%"
						});

						$("#multiselectid").on('change', function(evt, params) {
							// when 'chosen js' is applied to multi select, array of option values is returned
							// if single select, return type is string
							var selectedRepos = $(this).chosen().val();
							if(typeof selectedRepos === 'object') {
								angular.forEach(scope.repoList, function(repo) {
									if(selectedRepos) {
										if(selectedRepos.indexOf(repo.name) > -1) {
											repo.isVisible = true;
										}
										else {
											repo.isVisible = false;		
										}	
									}
									else {
										repo.isVisible = true;	
									}
								});
								scope.$apply();
							}
						});
					}); 

					angular.forEach(scope.repoList, function(repo){
						repo.isVisible = true;
						repo.isLoading = false;
						repo.hasIncomingChange  = false;
						httpService.getRepositoryBranch(
							repo.name, 
							function(data) {
								repo.branch = data;
							}
						);
					});
				}
				);


			scope.getRepoDetail = function(repo) {
				scope.currentRepo = repo;

				httpService.getRepositoryLogs(
					repo.name, 
					function(data, status, headers, config) {
						scope.currentRepo.branch.logs = data.result;
					}
				);


				httpService.getRepositoryStatus(
					repo.name,
					function(data, status, headers, config) {
						scope.currentRepo.statusMap = data.result;
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
					}
				);


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