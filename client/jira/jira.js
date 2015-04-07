'use strict';

angular.module('jira', ['WebService'])
.controller('jiraCtrl', function($scope, httpService) {
  $scope.jiraReq = {
    schema: 'https',
    host: 'jira.objectconsulting.com.au',
    context: '/rest/api/2/'
  };
  
  $scope.callJiraRest = function(e) {
    if(!e || e.keyCode == 13) {   
      $scope.isLoading = true;
      httpService.callJiraRestAny(
        $scope.jiraReq,
        function(data, status, headers, config) {
          $scope.result = JSON.stringify(data);
          $scope.isLoading = false;
        }
      );
    }
  };

})
;