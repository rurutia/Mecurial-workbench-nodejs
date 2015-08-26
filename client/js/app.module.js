'use strict';

// Declare app level module which depends on filters, and services
define(['angular'], function(angular) {
  var app = angular.module('IMMecurialApp', ['ui.router', 'ngResource', 'menuModule', 'repoModule', 'debugAjaxModule', 'WebService', 'jira', 'links', 'calculator'])
  .provider('initConfig', function() {
    this.$get = function() {
      return {
        commitTemplates: []
      };
    };
  })
  .config(function($stateProvider, $urlRouterProvider) {
    // @TODO For any unmatched url, redirect to /state1
    // $urlRouterProvider.otherwise("/state1"); 
    $stateProvider
      .state('repo', {
        url: "/repo/:name?branchName&bar",
        templateUrl: "repo/repo.html"
      })
      .state('calculator', {
        url: "/calculator",
        templateUrl: "calculator/calculator.html"
      })
      .state('jira', {
        url: "/jira",
        templateUrl: "jira/jira.html"
      })
      .state('links', {
      url: "/links",
        templateUrl: "links/links.html"
      })
      ;
  })
  .factory('RepoList', function($resource){
    return $resource(
        '/list'
    );
  })
  .controller('mainCtrl', function($scope, RepoList, $http, $rootScope) {
    $scope.user = {};
    $rootScope.debug = {ajaxCalls : []};
  })
  .run(function(initConfig, httpService) {
    httpService.getSystemConfig(
      'commitTemplates',    
      function(data, status, headers, config) {
        initConfig.commitTemplates = data;
      }
    );

  })
  ;

  return app;
}); 
