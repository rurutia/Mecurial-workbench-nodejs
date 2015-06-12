define(['angular', 'chosen'], function(angular) {
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
						}) ;
					}
					);


				scope.getRepoDetail = function(currentRepo) {
					angular.forEach(scope.repoList, function(repo){
						repo.isCurrent = repo == currentRepo ? true : false;
					});

					currentRepo.isCurrent = true;
					$state.go('repo', {name: currentRepo.name, branchName: currentRepo.branch.name, bar: 'bar'}, {reload:true});
				};

				scope.popover = function(currentRepo, event) {
					if(currentRepo.commits) {
						var content = "";
						angular.forEach(currentRepo.commits, function(commit, index){
							if(index > 0) content += "<hr>";
							angular.forEach(commit, function(value, key){
								content += key + ":" + value + "<br>";
						    });
						});
						$(event.currentTarget).popover({
				                trigger: 'hover',
				                html: true,
				                content: content,
				                container: "body",
				                template: '<div class="popover" role="tooltip" style="max-width:900px;"><div class="arrow"></div><h3 class="popover-title"></h3><div class="popover-content"><div class="data-content"></div></div></div>'
						});
						$(event.currentTarget).popover('show');
					}
				};

				scope.getSourceChange = function() {
					angular.forEach(scope.repoList, function(repo) {
						repo.isLoading = true;
						$http({method: 'GET', url: '/hg/in/' + repo.name}).
						success(function(data, status, headers, config) {
							repo.commits = data.commits;
							repo.hasIncomingChange = data.commits ? true : false;
							if(repo.hasIncomingChange) {
								repo.info = "Incoming change(s)";
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

});
