<?php

/**
 * Display only one image on product listings
 */
function trf_admin_preprocess_node(&$variables) {

if(isset($variables['content']['product:field_images']) && !empty($variables['content']['product:field_images'])) {
	if ($variables['content']['product:field_images']['#view_mode'] == 'node_product_list') {
		$count_images = count($variables['content']['product:field_images']['#items']);
		if ($count_images > 1) {
			$i = 0;
			while ( $i < $count_images) {
				unset($variables['content']['product:field_images'][$i+1]);
				$i ++;
			}
		}
	}
}

}
