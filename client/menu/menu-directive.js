angular.module('menuModule', ['WebService'])
.directive('appMenu', function($http, $timeout, httpService, $state) {
	return {
		restrict: 'E',
		templateUrl: 'menu/menu.html',
		scope: {},
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
				// scope.currentRepo = repo;
				$state.go('repo', {name: repo.name, branchName: repo.branch.name, bar: 'bar'});
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