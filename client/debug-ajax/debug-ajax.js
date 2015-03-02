'use.strict';

angular.module('debugAjaxModule', [])
.directive('debugAjax', function() {
	return {
		restrict: 'E',
		templateUrl: 'debug-ajax/debug-ajax.html',
		scope: {
			debug: '='
		},
		link: function(scope, elm, attrs) {
			scope.clear = function() {
				scope.debug.ajaxCalls = [];
			}
		}
	};
});

