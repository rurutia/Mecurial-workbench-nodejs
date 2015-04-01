'use strict';

angular.module('jira', ['WebService'])
.controller('jiraCtrl', function($scope, httpService) {
  $scope.jiraReq = {
    schema: 'https',
    baseUrl: 'jira.objectconsulting.com.au/rest/api/2/'
  };

  $scope.jiraReq.path = 'issue/IMTEST-4315';
  
  $scope.callJiraRest = function() {
      httpService.callJiraRestAny(
        $scope.jiraReq,
        function(data, status, headers, config) {
          console.log(data);
          $scope.result = JSON.stringify(data);
        }
      );
  };

})
;