
$(document).ready(function(){

	// $(".alert").addClass("in").fadeOut(4500);

$("input#debug-checkbox")
.bootstrapSwitch()
.on('switchChange.bootstrapSwitch', function(event, state) {
  	$('#debug-info-container').slideToggle();
});



/* swap open/close side menu icons */
$('[data-toggle=collapse]').click(function(){
  	// toggle icon
  	$(this).find("i").toggleClass("glyphicon-chevron-right glyphicon-chevron-down");
});
});