(function($) {
  $(document).ready(function() {
    // Hide the submit button until a file has been uploaded.
    $('#audio-snippet-create-form input[type=file].form-file').change(function(event) {
      $('#audio-snippet-create-form #edit-submit').show();
    });

    // Show the comments if the crop form isn't shown.
    if ($('#audio-cropper').length === 0) {
      $('.comment-form').show();
    }
  });
})(jQuery);