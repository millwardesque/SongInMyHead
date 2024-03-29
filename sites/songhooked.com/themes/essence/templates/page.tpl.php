<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */

  $has_sidebar = !empty($page['sidebar']);
?>
<!-- MAIN CONTAINER -->

  <div class="container-narrow">

    <header>
      <h1 id="responsive_headline"><?php print l($site_name, '<front>'); ?></h1>
      <h3><?php print $site_slogan; ?></h3>
      <?php if (!empty($page['header'])) print render($page['header']) ?>
    </header>

    <hr>

    <div id="info" class="row-fluid">
      <div class="span12">
        <div class="row-fluid">
          <?php if (!$is_front): ?>
            <h1><?php print $title; ?></h1>
          <?php endif ?>

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

    <?php if (!empty($social_is_ready)): // @ToDo Enable when there are social media accounts. ?>
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
    <?php endif; ?>

    <footer>
      <?php if (!empty($page['footer'])) print render($page['footer']) ?>
    </footer>
  </div> <!-- /Main Container -->