<?php 
  $has_sidebar = !empty($page['sidebar']);
?>
<!-- MAIN CONTAINER -->

  <div class="container-narrow">

    <header>
      <h1 id="responsive_headline"><?php print l($title, '<front>'); ?></h1>
      <?php if (!empty($page['header'])) print render($page['header']) ?>
      <nav>
        <a href="#info" id="info-link"></a>
      </nav>
    </header>

    <hr>

    <div id="info" class="row-fluid">
      <div class="span12">
        <div class="row-fluid">
          <?php if ($show_messages && $messages): ?>
            <div id='console'><div class='limiter clearfix'><?php print $messages; ?></div></div>
          <?php endif; ?>
          <?php if (!empty($page['help'])) print render($page['help']) ?>
        </div>
        <div class="row-fluid">
          <div class="span<?php print ($has_sidebar ? '6' : '12'); ?> info">
            <?php if (!empty($page['content'])) print render($page['content']) ?>
          </div>
          
          <?php if ($has_sidebar): ?>
          <div class="span6 info">
            <?php if (!empty($page['sidebar'])) print render($page['sidebar']) ?>
          </div>
          <?php endif ?>

        </div>
      </div>
    </div>

    <div class="row-fluid">
      <div class="span12 center">
        <?php if (!empty($page['post_content'])) print render($page['post_content']) ?>
      </div>
    </div>

    <div class="row-fluid social visible-desktop"> <!-- This is social media icons visible only on desk -->
      <div class="span12 center">
        <a class="facebook" title="facebook" href="#"></a>
        <a class="twitter" title="twitter" href="#"></a>
        <a class="tumblr" title="tumblr" href="#"></a>
        <a class="rss" title="rss" href="#"></a>
        <a class="mail" title="mail" href="#"></a> 
      </div>
    </div>

        <div class="row-fluid social_touch visible-phone visible-tablet"> <!-- This is social media icons visible only on phones and tablets -->
      <div class="span12 center">
        <a class="facebook" title="facebook" href="#"></a>
        <a class="twitter" title="twitter" href="#"></a>
        <a class="tumblr" title="tumblr" href="#"></a>
        <a class="rss" title="rss" href="#"></a>
        <a class="mail" title="mail" href="#"></a>                  
      </div>
    </div>

    <footer>
      <?php if (!empty($page['footer'])) print render($page['footer']) ?>
    </footer>
  </div> <!-- /Main Container -->