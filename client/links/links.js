'use strict';

define(['angular'], function(angular) {
  angular.module('links', ['WebService'])
  .controller('linksCtrl', function($scope, httpService) {
    $scope.newId = 1;

    httpService.getLink(
      'im_wiki',    
      function(data, status, headers, config) {
        $scope.items = data;
        $scope.newId = parseInt($scope.items[$scope.items.length - 1].id) + 1;
        console.log($scope.newId);
        console.log(Object.keys($scope.items[0]));
        $scope.keys = Object.keys($scope.items[0]);
        console.log(data);
      }
    );

    $scope.currentAction = "New";

    $scope.addItem = function() {
      $scope.newItem = {$$editable: true};
      angular.forEach($scope.keys, function(key, i) {
        if(key === "id") {
          $scope.newItem[key] = $scope.newId;
        }
        else {
          $scope.newItem[key] = undefined;
        }
      });
      $scope.items.push($scope.newItem);

      $scope.currentAction = "Save";
    };

    $scope.cancelItem = function() {
      $scope.items.pop();
      
      $scope.currentAction = "New";
    };

    $scope.saveItem = function() {
      var itemToSave = {};
      angular.forEach($scope.newItem, function(value, key) {
        if($scope.keys.indexOf(key) > -1) {
          itemToSave[key] = $scope.newItem[key];
        }
      });
      console.log(itemToSave);

      httpService.addLink(
        'im_wiki',
        itemToSave,
        function(data, status, headers, config) {
          console.log("saved...");
          httpService.getLink(
            'im_wiki',    
            function(data, status, headers, config) {
              $scope.items = data;
              $scope.newId = parseInt($scope.items[$scope.items.length - 1].id) + 1;
              console.log($scope.newId);
              console.log(Object.keys($scope.items[0]));
              $scope.keys = Object.keys($scope.items[0]);
              console.log(data);
            }
          );
        }
      );
      // $scope.currentAction = "New";
    };

    $scope.deleteItem = function() {
      console.log($scope.items);
    };
  })

});
