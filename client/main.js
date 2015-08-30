require.config({
    baseUrl: ".",
    paths: {
      "jquery" : "js/jquery-1.11.1.min",
      "bootstrap" :  "js/bootstrap.min",
      "bootstrap-switch" : "js/bootstrap-switch",
      "chosen" : "js/libs/chosen/chosen.jquery",
      "scripts" : "js/scripts",
      "angular" : "js/angular/angular",
      "angular-resource" : "js/angular/angular-resource",
      "angular-ui-router" : "js/angular-modules/angular-ui-router",
      "app" : "js/app.module",
      "web-service" : "shared/web-service",
      "filters" : "shared/filters",
      "menu-directive" : "menu/menu-directive",
      "repo" : "repo/repo",
      "repo-status": "repo/repo-status/repo-status-directive",
      "debug-ajax" : "debug-ajax/debug-ajax",
      "jira" : "jira/jira",
      "links" : "links/links",
      "calculator" : "calculator/calculator"
    },
    shim : {
        "bootstrap" : { "deps" :['jquery'] },
        "bootstrap-switch" : { "deps" :['bootstrap'] },
        "angular" : { "exports" : 'angular' },
        "angular-resource" : { "deps" :['angular'] },
        "angular-ui-router" : { "deps" :['angular'] }
    },
});

require(['jquery', 'angular', "angular-resource", "angular-ui-router", 
	'app', "web-service", "filters", 'menu-directive', 'repo', 
  'repo-status', 
  "debug-ajax", "jira", "calculator", "links",
	'scripts'], function($) {
		$(function () {
			angular.bootstrap(document, ["IMMecurialApp"]);
		});
});
