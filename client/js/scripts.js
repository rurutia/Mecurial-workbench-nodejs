define(['jquery', 'bootstrap', 'bootstrap-switch'], function($) {
	$(document).ready(function(){


		$("input#debug-checkbox")
		.bootstrapSwitch()
		.on('switchChange.bootstrapSwitch', function(event, state) {
			$('#debug-info-container').slideToggle();
		});



		$('[data-toggle=collapse]').click(function(){
			$(this).find("i").toggleClass("glyphicon-chevron-right glyphicon-chevron-down");
		});
	});
});
