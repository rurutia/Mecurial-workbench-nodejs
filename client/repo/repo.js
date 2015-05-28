define(['angular'], function(angular) {
  angular.module('repoModule', ['WebService'])
  .controller('repoCtrl', function($scope, $stateParams, RepoList, $http, $rootScope, httpService, initConfig) {
    $scope.currentRepo = {
      branch: {
        name: $stateParams.branchName
      },
      name: $stateParams.name
    };

    $scope.$watch('currentRepo.statusMap', function(newVal, oldVal) {
       delete $scope.currentRepo.commitMsg;
    });

    $scope.commitTemplates = initConfig.commitTemplates;

      $scope.fileList = [];
      $scope.command = {};
      $scope.branchDiff = {};

      $scope.ticketsOrderBy = 'number';


      httpService.getRepositoryLogs(
        $scope.currentRepo.name, 
        function(data, status, headers, config) {
          $scope.currentRepo.branch.logs = data.result;
        }
      );


      httpService.getRepositoryStatus(
        $scope.currentRepo.name,
        function(data, status, headers, config) {
          $scope.currentRepo.statusMap = data.result;
        }
      );

      $scope.updateTicketsOrderBy = function(orderBy) {
        $scope.ticketsOrderBy = orderBy;
      };


      $scope.toggleFileLinkStyle = function(e) {
        $(e.target).parent().find('a').toggleClass("bold");
      };

      $scope.commit = function() {
        console.log($scope.currentRepo.commitMsg);
        $http({
          method: 'POST', 
          url: '/commit/' + $scope.currentRepo.name, 
          data: {message: $scope.currentRepo.commitMsg}
        }).
          success(function(data, status, headers, config) {
            console.log(data);


            $http({method: 'GET', url: '/list/' + $scope.currentRepo.name}).
              success(function(data, status, headers, config) {
                $scope.currentRepo.log = data;
              }).
              error(function(data, status, headers, config) {
              });

          }).
          error(function(data, status, headers, config) {
          });  
      };
   

      $scope.issueCommand = function(e) {
        if(!e || e.keyCode == 13) {
          $scope.command.isLoading = true;
          $http({
            method: 'POST', 
            url: '/raw/' + $scope.currentRepo.name, 
            data: {command: $scope.command.text}
          }).
            success(function(data, status, headers, config) {
            console.log(data);
            $scope.command.result = data.result;
            $scope.command.isLoading = false;
            }).
            error(function(data, status, headers, config) {
            });     
        }
      };

      $scope.diffBranches = function() {
          $scope.command.isLoading = true;
          $http({
            method: 'POST', 
            url: '/diffBranches/' + $scope.currentRepo.name, 
            data: {branch1: $scope.branchDiff.branch1, branch2: $scope.branchDiff.branch2}
          }).
            success(function(data, status, headers, config) {
            console.log(data);
            $scope.branchDiff.tickets = data.result;
            $scope.command.isLoading = false;
            }).
            error(function(data, status, headers, config) {
            });     
      };

      $scope.updateCommitMsg = function() {
          angular.forEach($scope.currentRepo.statusMap, function(fileList, status) {

            // replace placeholders in commit template with data defined in 'msgReplaceMap'
            var msgReplaceMap = {
              ticketNumber: $scope.currentRepo.branch.name,
              ticketContent: 'to be implemented by calling JIRA REST at backend'
            };

            // pattern for placeholders in form of '@{placeholder}'
            var placeholderPatt = /@\{(\w+)\}/m;
            var match;

            // loop through all placeholders in template and replace them with data in 'msgReplaceMap'
            do {
              match = placeholderPatt.exec($scope.currentRepo.commitMsg);
              if (match) {
                $scope.currentRepo.commitMsg = $scope.currentRepo.commitMsg.replace(new RegExp('@\{' + match[1] + '\}', 'gm'), msgReplaceMap[match[1]]); 
              }
            } while(match);

            var commitStatus = null;
            if(status.indexOf('Modified') > -1)
              commitStatus = 'M';
            else if(status.indexOf('Added') > -1)
              commitStatus = 'A';
            else if(status.indexOf('Removed') > -1)
              commitStatus = 'R';

            if(commitStatus) {
              angular.forEach(fileList, function(file) {
                $scope.currentRepo.commitMsg += '\n' + commitStatus + ' ' + file.name;
              });
            }
          });
      };

      $scope.action = function(action, status, isAll) {
        var files = $scope.currentRepo.statusMap[status];

        var selectedFiles = [];
        if(isAll){
          selectedFiles = files;
        }
        else {
          selectedFiles = $(files).filter(function(i, file) {
            if(file.isSelected) {
              return file;
            }
          }); 
          if(selectedFiles.length == 0)
            return false;        
        }

        var successCallback = function(data, status, headers, config) {
          httpService.getRepositoryStatus(
            $scope.currentRepo.name, 
            function(data, status, headers, config) {
              $scope.currentRepo.statusMap = data.result;
            }
          );
        };

        switch(action) {
          case 'add':
            httpService.addFiles(
              $scope.currentRepo.name, 
              Array.prototype.slice.call(selectedFiles),
              successCallback
            );
            break;

          case 'forget':
            httpService.forgetFiles(
              $scope.currentRepo.name, 
              Array.prototype.slice.call(selectedFiles),
              successCallback
            );
            break;

          case 'revert':
            httpService.revertFiles(
              $scope.currentRepo.name, 
              Array.prototype.slice.call(selectedFiles),
              successCallback
            );
            break;
        }



      };

      $scope.changeCurrentStatus = function(status) {
        $scope.currentStatus = status;
      };

  });   
});
