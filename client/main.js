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
      "menu-directive" : "menu/menu-directive",
      "repo" : "repo/repo",
      "debug-ajax" : "debug-ajax/debug-ajax",
      "jira" : "jira/jira",
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
	'app', "web-service", 'menu-directive', 'repo', "debug-ajax", "jira", "calculator",
	'scripts'], function($) {
	      $(function () {

            angular.bootstrap(document, ["IMMecurialApp"]);

      });
});
