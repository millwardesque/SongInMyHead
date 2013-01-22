(function ($) {
  // All your code here
  Drupal.behaviors.audio_crop = {
    attach: function(context, settings) {
      var cropper = $("#audio-cropper", context); // Cropper element.
      var start = $("#edit-start", context);      // Slider start element.
      var end = $("#edit-end", context);          // Slider end element.
      var max_duration = parseInt(settings.audio_crop.max_duration, 10);  // Maximum duration of a snippet.
      if (max_duration < 1) {
        max_duration = false;
      }
      
      if (cropper.length && start.length && end.length) {
        var min = start.val();  // Minimum value of the slider.
        var max = end.val();    // Maximum value of the slider.
        var start_end = (max_duration && (max - min) > max_duration) ? min + max_duration : max;  // Set the starting end position
        var prev_start = min,     // Tracks the previous position of the slider to figure.
            prev_end = start_end;

        // Show the crop tool.
        cropper.slider({
          range: true,
          min: min,
          max: max,
          values: [min, start_end],
          slide: function(event, ui) {
            // Capture the new slider positions and distance.
            var new_start = parseInt(ui.values[0], 10);
            var new_end = parseInt(ui.values[1], 10);
            var new_duration = new_end - new_start;

            // Ensure the new positions don't exceed the max duration.
            if (max_duration && new_duration > max_duration) {
              if (new_start < prev_start) {
                new_end = new_start + max_duration;
                cropper.slider("values", 1, new_end);
              }
              else if (new_end > prev_end) {
                new_start = new_end - max_duration;
                cropper.slider("values", 0, new_start);
              }
            }

            // Update the previous position values
            prev_start = new_start;
            prev_end = new_end;

            // Update the start and end fields
            start.val(new_start);
            end.val(new_end);

            // Update the visual time display
            $('.start-time', context).html(format_seconds(new_start));
            $('.end-time', context).html(format_seconds(new_end));

            // Update the audio file currentTime if necessary
            var audio_file = $('.minplayer-jqueryui-media');
            audio_file.each(function(index, element) {
              if (element.currentTime < new_start) {
                element.currentTime = new_start;
              }
            });
          }
        });

        // Set the initial values.
        start.val(cropper.slider("values", 0));
        end.val(cropper.slider("values", 1));
        $('.start-time', context).html(format_seconds(start.val()));
        $('.end-time', context).html(format_seconds(end.val()));

        // Set a timer to check for auto-stop
       setInterval(function() {
          var audio_file = $('.minplayer-jqueryui-media');
          audio_file.each(function(index, element) {
            // Stop playing if we've reached the end of the slider
            if (element.currentTime >= end.val()) {
              element.pause();
              element.currentTime = start.val();
            }
          });

        }, 500);
      }
    }
  };
  
  /**
   * Formats a number of seconds as a HH:MM:SS time
   *
   * @param seconds
   *  The number of seconds to format.
   *
   * @return A string describing the time in HH:MM:SS format
   */
  function format_seconds(seconds) {
    var hours = 0,
        minutes = 0,
        leftover_seconds = 0;

    leftover_seconds = seconds % 60;
    
    if (seconds > 60) {
      minutes = Math.floor(seconds / 60) % 60;
    }
    
    if (seconds > 3600) {
      hours = Math.floor(seconds / 3600);
    }

    return pad_with_zeroes(hours, 2) + ":" + pad_with_zeroes(minutes, 2) + ":" + pad_with_zeroes(leftover_seconds, 2);
  }

  /**
   * Pads a value with zeroes until it reaches a certain length.
   *
   * @param value
   *  The value to pad.
   * @param length
   *  The length to which the value will be padded.
   *
   * @return A string padded to meet the given length.
   */
  function pad_with_zeroes(value, length) {
    value = Math.round(value).toString(); // Ensure value is treated as a string.

    // Add zeroes until the length matches.
    while (value.length < length) {
      value = '0' + value;
    }

    return value;
  }

})(jQuery);