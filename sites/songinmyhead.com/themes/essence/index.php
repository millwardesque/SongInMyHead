
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0, maximum-scale=1.0, user-scalable=no" />
  <meta name="apple-mobile-web-app-capable" content="yes" /> 
  <meta name="description" content="">
  <meta name="author" content="">
  <title>Essence - Clean Responsive Under Construction / Coming Soon Template</title>
  <link href="css/style_light.css" rel="stylesheet" type="text/css" media="screen"/>
  <link href="css/bootstrap.min.css" rel="stylesheet">
  <link href='http://fonts.googleapis.com/css?family=Open+Sans:400,700' rel='stylesheet' type='text/css'>
  <link href='http://fonts.googleapis.com/css?family=Arvo:400,700' rel='stylesheet' type='text/css'>
  
  <!-- HTML5 shim, for IE6-8 support of HTML5 elements -->
  <!--[if lt IE 9]>
  <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
  <script src="http://css3-mediaqueries-js.googlecode.com/svn/trunk/css3-mediaqueries.js"></script>
  <![endif]-->

  <!-- Fav and touch icons -->
  <link rel="apple-touch-icon-precomposed" sizes="144x144" href="img/ico/apple-touch-icon-144-precomposed.png">
  <link rel="apple-touch-icon-precomposed" sizes="114x114" href="img/ico/apple-touch-icon-114-precomposed.png">
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="img/ico/apple-touch-icon-72-precomposed.png">
                  <link rel="apple-touch-icon-precomposed" href="img/ico/apple-touch-icon-57-precomposed.png">
                                 <link rel="shortcut icon" href="img/ico/favicon.png">
</head>
<body>

  <!-- MAIN CONTAINER -->

  <div class="container-narrow">

    <header>
      <h1 id="responsive_headline">Essence</h1>
      <h2>It's round the corner. And it'll blow your mind! Seriously. We are about to push it live. Be sure not to miss the launch. Leave us your email and we'll hit you up when it's ready. We do no spam. Promise.</h2>
      <nav>
        <a href="#info" id="info-link"></a>
      </nav>
    </header>

    <hr>

    <div id="info" class="row-fluid">
      <div class="span12">
        <div class="row-fluid">

          <div class="span8 info">
            <H3>About</h3>
              <p>This Coming Soon HTML5/CSS3 Template is fully responsive, try to resize browser window. It’s based on Twitter Bootstrap v2.2.1 responsive grid and compatible with all major modern browsers. Optimized for mobile devices. You can easily adjust it to your needs. This template includes jQuery Countdown, Working AJAX MailChimp newsletter form (free MailChimp account required) and JQuery Twitter feed. No database needed. That’s pretty much all you could need before your awesome website is done! And you get 28 resolution independent svg social icons <a href="http://matyushen.com/simplico/" target="blank">Simplico</a>. As well as quick support, detailed documentation and clean source code. Hope you like it!</p>
          </div>
          <div class="span4 info">
            <h3>Contact</h3>

            <address>
              <strong>AwesomeCompanyName, Inc.</strong><br>
              Moon, Crater 33 <br>
              <a href="tel:1-111-555-5555">1-111-555-5555</a>
            </address>

            <address>
              <strong>Free Man</strong><br>
              <a href="mailto:#">freeman@example.com</a>
            </address>
          </div>
        </div>
      </div>
    </div>

    <div class="container-narrow">
      <div id="count" class="row-fluid center">
        <div id="countdown" class="span6 offset3"></div>
      </div>
    </div>

    <div class="row-fluid center">
      <div class="span12">
        <form id="signup" class="subscribe" action="<?=$_SERVER['PHP_SELF']; ?>" method="get">
          <input type="text" name="email" id="email" placeholder="Your email" />
          <input class="submit" type="submit" name="submit" value="Notify me!"/>
        </form>
        <div class="row-fluid">
          <p class="message">
            <?php require_once('inc/store-address.php'); if(isset($_GET['submit'])){ echo storeAddress(); } ?>
          </p>
        </div>
      </div>
    </div>

    <div class="row-fluid">
      <div class="span12 center">
        <div id="tw">
          <p>
            loading recent tweets..
          </p>
        </div>
      </div>
    </div>

    <div class="row-fluid social visible-desktop"> <!-- This is social media icons visible only on desk -->
      <div class="span12 center">
        <a class="facebook" title="facebook" href="#"></a>
        <a class="twitter" title="twitter" href="#"></a>
        <a class="tumblr" title="tumblr" href="#"></a>
        <a class="youtube" title="youtube" href="#"></a>
        <a class="instagram" title="instagram" href="#"></a>
        <a class="flickr" title="flickr" href="#"></a>
        <a class="dribbble" title="dribbble" href="#"></a>
        <a class="envato" title="envato" href="#"></a>
        <a class="github" title="github" href="#"></a>
        <a class="spotify" title="spotify" href="#"></a>
        <a class="reddit" title="reddit" href="#"></a>
        <a class="rss" title="rss" href="#"></a>
        <a class="mail" title="mail" href="#"></a>
        <!-- 
        <a class="google" title="google" href="#"></a>
        <a class="linkedin" title="linkedin" href="#"></a>
        <a class="blogger" title="blogger" href="#"></a>
        <a class="formspring" title="formspring" href="#"></a>
        <a class="vimeo" title="vimeo" href="#"></a>
        <a class="fivepx" title="500px" href="#"></a>
        <a class="deviantart" title="devianart" href="#"></a>
        <a class="stackoverflow" title="stackoverflow" href="#"></a>
        <a class="fancy" title="fancy" href="#"></a>
        <a class="pinterest" title="pinterest" href="#"></a>
        <a class="soundcloud" title="soundcloud" href="#"></a>
        <a class="lastfm" title="lastfm" href="#"></a>
        <a class="behance" title="behance" href="#"></a>
        <a class="forrst" title="forrst" href="#"></a>
        <a class="stumbleupon" title="stumbleupon" href="#"></a>
        -->      
      </div>
    </div>

        <div class="row-fluid social_touch visible-phone visible-tablet"> <!-- This is social media icons visible only on phones and tablets -->
      <div class="span12 center">
        <a class="facebook" title="facebook" href="#"></a>
        <a class="twitter" title="twitter" href="#"></a>
        <a class="tumblr" title="tumblr" href="#"></a>
        <a class="youtube" title="youtube" href="#"></a>
        <a class="instagram" title="instagram" href="#"></a>
        <a class="flickr" title="flickr" href="#"></a>
        <a class="dribbble" title="dribbble" href="#"></a>
        <a class="envato" title="envato" href="#"></a>
        <a class="github" title="github" href="#"></a>
        <a class="spotify" title="spotify" href="#"></a>
        <a class="reddit" title="reddit" href="#"></a>
        <a class="rss" title="rss" href="#"></a>
        <a class="mail" title="mail" href="#"></a>
        <!-- 
        <a class="google" title="google" href="#"></a>
        <a class="linkedin" title="linkedin" href="#"></a>
        <a class="blogger" title="blogger" href="#"></a>
        <a class="formspring" title="formspring" href="#"></a>
        <a class="vimeo" title="vimeo" href="#"></a>
        <a class="fivepx" title="500px" href="#"></a>
        <a class="deviantart" title="devianart" href="#"></a>
        <a class="stackoverflow" title="stackoverflow" href="#"></a>
        <a class="fancy" title="fancy" href="#"></a>
        <a class="pinterest" title="pinterest" href="#"></a>
        <a class="soundcloud" title="soundcloud" href="#"></a>
        <a class="lastfm" title="lastfm" href="#"></a>
        <a class="behance" title="behance" href="#"></a>
        <a class="forrst" title="forrst" href="#"></a>
        <a class="stumbleupon" title="stumbleupon" href="#"></a>
        -->
                     
      </div>
    </div>


    <footer>
      <p>&copy; Company 2012</p>
    </footer>

  </div> <!-- /Main Container -->


  <!-- /\/\/\/\/\/\/\/ Javascript \/\/\/\/\/\/\/\ -->

  <script src="http://code.jquery.com/jquery-latest.min.js" type="text/javascript"></script>
  <script src="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js"></script>

  <!-- MailChimp -->
  <script type="text/javascript" src="js/mailing-list.js"></script>

  <!-- FitText jQuery plugin - http://fittextjs.com -->
  <script src="js/jquery.fittext.js"></script>
  <script>
    jQuery("#responsive_headline").fitText(0.6);
  </script>

  <!-- jQuery Countdown - http://keith-wood.name/countdown.html -->
  <script type="text/javascript" src="js/jquery.countdown.min.js"></script>
  <script type="text/javascript">
  $(function () {
    $('#countdown').countdown({ 
      until: new Date(2013, 12 - 1, 31)}); // put here launch date, for exampele Date(2013, 06 - 1, 01) is june 01 2013
  });
  </script>

  <!-- jQuery Twitter Feed - http://code.google.com/p/realtime-related-tweets-bar -->
  <script type="text/javascript" src="js/jquery.relatedtweets-1.0.min.js"></script>
  <script type="text/javascript"> 
    $(document).ready(function(){
      $('#tw').relatedTweets({
        debug:1
        ,from_users:'dribbble' // put here your twitter username
        ,status:1
        ,realtime:0
        ,n:20
        ,show_avatar:0
        ,show_date:0
        ,show_author:0
      });
    });
  </script>

  <!-- Hidden box -->
  <script type="text/javascript">
  $(document).ready(function () {
  $("#info").hide();

  $("#info-link").click(function () {
    $("#info").slideToggle("slow");
    $(this).toggleClass("active"); return false;
  });
  });
  </script>

  <!-- Google Analytics -->
        <script>
            var _gaq=[['_setAccount','your id'],['_trackPageview']];
            (function(d,t){var g=d.createElement(t),s=d.getElementsByTagName(t)[0];
            g.src=('https:'==location.protocol?'//ssl':'//www')+'.google-analytics.com/ga.js';
            s.parentNode.insertBefore(g,s)}(document,'script'));
        </script>
</body>
</html>
