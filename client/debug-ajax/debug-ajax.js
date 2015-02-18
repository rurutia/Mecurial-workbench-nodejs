'use.strict';

angular.module('debugAjaxModule', [])
.directive('debugAjax', function() {
	return {
		restrict: 'E',
		templateUrl: 'debug-ajax/debug-ajax.html',
		scope: {
			debug: '='
		}
	};
});

