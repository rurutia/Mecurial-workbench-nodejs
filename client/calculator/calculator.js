'use strict';

// Declare app level module which depends on filters, and services
angular.module('calculator', [])
.controller('calculatorCtrl', function($scope) {
  	$scope.items = [];
  	$scope.exchangeRate = 5.0;

  	$scope.addItem = function() {
  		$scope.items.push({editable: true});
  	};

	$scope.editItem = function(item) {
  		item.editable = true;
  		item.copy = {};
  		angular.copy(item, item.copy);
  	};

  	$scope.saveItem = function(item) {
  		angular.copy(item.copy, item);
  		item.editable = false;
  	};

	$scope.cancelEditItem = function(item) {
  		item.editable = false;
  		delete item.copy;
    };


	$scope.items.push({
  		description: 'swiss',
  		priceAud: '3.2',
  		priceRmb: '16',
  		sellRmb: '32',
  		quantity: '5',
  		weight: '12'
  	});
  	$scope.items.push({
  		description: 'swiss',
  		priceAud: '3.2',
  		priceRmb: '16',
  		sellRmb: '32',
  		quantity: '5',
  		weight: '12'
  	});

})
;