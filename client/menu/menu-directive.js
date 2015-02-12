angular.module('menuModule', [])
.directive('appMenu', function($http) {
	return {
		restrict: 'E',
		templateUrl: 'menu/menu.html',
		scope: {
			currentRepo : "="
		},
		link: function(scope, elm, attrs) {
			$http({method: 'GET', url: '/list'}).
				success(function(data, status, headers, config) {
					scope.repoList = data;
					angular.forEach(scope.repoList, function(repo){
						repo.isLoading = false;
						repo.hasIncomingChange  = false
					});
				}).
				error(function(data, status, headers, config) {
				});

				scope.showRepoDetail = function(repoName) {
					scope.currentRepo.name = repoName;
					$http({method: 'GET', url: '/list/' + repoName}).
						success(function(data, status, headers, config) {
							scope.currentRepo.log = data;
						}).
						error(function(data, status, headers, config) {
						});

					$http({method: 'GET', url: '/status/' + repoName}).
						success(function(data, status, headers, config) {
							scope.currentRepo.statusMap = data;
							console.log(data);
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


					$http({method: 'GET', url: '/branch/' + repoName}).
						success(function(data, status, headers, config) {
							scope.currentRepo.currentBranchName = data[0];
						}).
						error(function(data, status, headers, config) {
						});
				};

				scope.showHgIn = function() {
					if(scope.repoList) {
						var flags = {};
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
					}

				};



		}
	};
});