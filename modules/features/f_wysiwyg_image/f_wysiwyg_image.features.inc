<?php
/**
 * @file
 * f_wysiwyg_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_wysiwyg_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
