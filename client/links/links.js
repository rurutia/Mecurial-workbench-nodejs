'use strict';

define(['angular'], function(angular) {
  angular.module('links', ['WebService'])
  .controller('linksCtrl', function($scope, httpService) {
    httpService.getLink(
      'im_wiki',    
      function(data, status, headers, config) {
        $scope.list = data;
        console.log(data);
      }
    );
  });
});
