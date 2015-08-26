'use strict';

define(['angular'], function(angular) {
	angular.module('WebService', [])
	.factory('httpService', function($http, $rootScope) {
		var hgHttp = function() {
			var _debugFilter = function(data) {
				var newAjaxCall = {
					url: window.location.origin + data.url, 
					method: data.method, 
					data: data.data,
					time: new Date().toLocaleString()
				};

				if($rootScope.debug) {
		            if($rootScope.debug.ajaxCalls.length >= 4) {
		            	$rootScope.debug.ajaxCalls.pop();
		            }
		        	$rootScope.debug.ajaxCalls.unshift(newAjaxCall);
				}

	        	data.ajaxDebug = newAjaxCall;
			};
			var _preFilters = [_debugFilter];
			var _goThroughPreFilters = function(data) {
				for(var i=0;i<_preFilters.length;i++ ){
					_preFilters[i](data);
				}
			};

			var _sendRequest = function(reqData, successCallback, errorCallback) {
				_goThroughPreFilters(reqData);
				$http(reqData)
				.success(function(data, status, headers, config) {
					if(reqData.ajaxDebug) {
						reqData.ajaxDebug.command = data.command;
				    }
					successCallback(data, status, headers, config);
				})
				.error(function(data, status, headers, config) {
					errorCallback(data, status, headers, config);
				});	
			};

			this.getRepositories = function(successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/repositories'};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			// limitation: current branch name only
			this.getRepositoryBranch = function(name, successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/repository/branch/' + name};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			// limitation: latest log of current branch only
			this.getRepositoryLogs = function(name, successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/repository/log/' + name};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			// limitation: status of current branch only
			this.getRepositoryStatus = function(name, successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/repository/status/' + name};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.addFiles = function(name, files, successCallback, errorCallback) {
				var reqData = {method: 'POST', url: '/add/' + name, data: files};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.forgetFiles = function(name, files, successCallback, errorCallback) {
				var reqData = {method: 'POST', url: '/forget/' + name, data: files};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.revertFiles = function(name, files, successCallback, errorCallback) {
				var reqData = {method: 'POST', url: '/revert/' + name, data: files};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.getSystemConfig = function(name, successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/config/' + name};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.getLink = function(name, successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/links/' + name};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.callJiraRestAny = function(data, successCallback, errorCallback) {
				var reqData = {method: 'POST', url: '/jira/any', data: data};
				_sendRequest(reqData, successCallback, errorCallback);
			};

			this.getFileContent = function(repoName, data, successCallback, errorCallback) {
				var reqData = {method: 'GET', url: '/file/' + repoName, params: data};
				_sendRequest(reqData, successCallback, errorCallback);
			};

		};

		return new hgHttp();



	});

});
