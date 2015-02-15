'use strict';

angular.module('WebService', [])
.factory('httpService', function($http, $rootScope) {
	var hgHttp = function() {
		var _debugFilter = function(data) {
			var newAjaxCall = {url: window.location.origin + data.url, method: data.method};
			newAjaxCall.time = new Date().toLocaleString();
            if($rootScope.debug.ajaxCalls.length > 3) {
            	$rootScope.debug.ajaxCalls.pop();
            }
        	$rootScope.debug.ajaxCalls.unshift(newAjaxCall);

        	data.ajaxDebug = newAjaxCall;
		};
		var _preFilters = [_debugFilter];
		var _goThroughPreFilters = function(data) {
			for(var i=0;i<_preFilters.length;i++ ){
				_preFilters[i](data);
			}
		};


		this.getRepositories = function() {
			var data = {method: 'GET', url: '/repositories'};
			_goThroughPreFilters(data);
			return $http(data);
		};

		// limitation: current branch name only
		this.getRepositoryBranch = function(name) {
			var data = {method: 'GET', url: '/repository/branch/' + name};
			_goThroughPreFilters(data);
			return $http(data);
		};

		// limitation: latest log of current branch only
		this.getRepositoryLogs = function(name) {
			var data = {method: 'GET', url: '/repository/log/' + name};
			_goThroughPreFilters(data);
			return $http(data);
		};

		// limitation: status of current branch only
		this.getRepositoryStatus = function(name) {
			var data = {method: 'GET', url: '/repository/status/' + name};
			_goThroughPreFilters(data);
			return $http(data);
		};

	};

	return new hgHttp();



});
