<?php
/**
 * @file
 * trf_site_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_current_search_default_items_alter().
 */
function trf_site_search_current_search_default_items_alter(&$data) {
  if (isset($data['kickstart_search'])) {
    $data['kickstart_search']->settings['items']['active_items']['keys_link'] = 1; /* WAS: '' */
    $data['kickstart_search']->settings['items']['active_items']['keys_param'] = ''; /* WAS: '' */
    $data['kickstart_search']->settings['items']['results']['text'] = 'There is <em>[facetapi_results:result-count]</em> titanium ring'; /* WAS: 'There is <em>[facetapi_results:result-count]</em> search result' */
    $data['kickstart_search']->settings['items']['results']['text_plural'] = 'There are <em>[facetapi_results:result-count]</em> titanium rings'; /* WAS: 'There are <em>[facetapi_results:result-count]</em> search results' */
  }
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function trf_site_search_default_search_api_index_alter(&$data) {
  if (isset($data['product_display'])) {
    $data['product_display']->options['data_alter_callbacks']['commerce_search_api_alter_product_status']['settings'] = array(); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['commerce_search_api_product_display_filter']['settings'] = array(); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_10'] = array(
      'name' => 'Tags name (Fulltext)',
      'type' => 'fulltext',
      'fields' => array(
        0 => 'field_tags:name',
      ),
      'description' => 'A Fulltext aggregation of the following fields: Tags » Name.',
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_1']['description'] = 'A Fulltext aggregation of the following fields: Title.'; /* WAS: 'A Fulltext aggregation of the title field.' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_2']['description'] = 'A Fulltext aggregation of the following fields: Brand » Name.'; /* WAS: 'Name property of Brand as fulltext' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_3']['description'] = 'A Fulltext aggregation of the following fields: Category » Name.'; /* WAS: 'Name property of Category as fulltext' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_4']['description'] = 'A Fulltext aggregation of the following fields: Collection » Name.'; /* WAS: 'Name property of Collection as fulltext' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_5']['description'] = 'A Fulltext aggregation of the following fields: Gender » Name.'; /* WAS: 'Name property of Gender as fulltext' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_9']['description'] = 'A Fulltext aggregation of the following fields: Category » Name.'; /* WAS: 'Name property of Product type as fulltext' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_9']['fields'][0] = 'field_blog_category:name'; /* WAS: 'field_product_type:name' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_9']['name'] = 'Category name (Fulltext)'; /* WAS: 'Product type name (Fulltext)' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['status'] = 0; /* WAS: 1 */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_hierarchy'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(
        'fields' => array(),
      ),
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_multi_aggregation'] = array(
      'status' => 1,
      'weight' => 0,
      'settings' => array(
        'fields' => array(
          'search_api_multi_aggregation_1' => array(
            'name' => 'Keywords',
            'fields' => array(
              0 => 'field_ring_elements',
              1 => 'field_ring_elements_primary',
            ),
            'description' => 'A text aggregation of the following fields: Elements, Primary element.',
          ),
        ),
      ),
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_url'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(),
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_add_viewed_entity'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(
        'mode' => 'full',
      ),
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_bundle_filter'] = array(
      'status' => 0,
      'weight' => -10,
      'settings' => array(
        'default' => 1,
        'bundles' => array(),
      ),
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_node_access'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(),
    ); /* WAS: '' */
    $data['product_display']->options['data_alter_callbacks']['search_api_alter_node_status'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(),
    ); /* WAS: '' */
    $data['product_display']->options['datasource'] = array(
      'bundles' => array(),
    ); /* WAS: '' */
    $data['product_display']->options['fields']['field_gemstones_bool'] = array(
      'type' => 'boolean',
    ); /* WAS: '' */
    $data['product_display']->options['fields']['field_ring_name'] = array(
      'type' => 'text',
    ); /* WAS: '' */
    $data['product_display']->options['fields']['field_sku_master'] = array(
      'type' => 'text',
      'boost' => '0.0',
    ); /* WAS: '' */
    $data['product_display']->options['fields']['search_api_multi_aggregation_1'] = array(
      'type' => 'list<string>',
    ); /* WAS: '' */
    $data['product_display']->options['fields']['sticky'] = array(
      'type' => 'boolean',
    ); /* WAS: '' */
    $data['product_display']->options['fields']['title'] = array(
      'type' => 'text',
    ); /* WAS: '' */
    $data['product_display']->options['processors'] = array(
      'search_api_case_ignore' => array(
        'status' => 0,
        'weight' => 0,
        'settings' => array(
          'fields' => array(),
        ),
      ),
      'search_api_html_filter' => array(
        'status' => 0,
        'weight' => 10,
        'settings' => array(
          'fields' => array(),
          'title' => 0,
          'alt' => 1,
          'tags' => 'h1 = 5
          h2 = 3
          h3 = 2
          strong = 2
          b = 2
          em = 1.5
          u = 1.5',
        ),
      ),
      'search_api_transliteration' => array(
        'status' => 0,
        'weight' => 15,
        'settings' => array(
          'fields' => array(),
        ),
      ),
      'search_api_tokenizer' => array(
        'status' => 0,
        'weight' => 20,
        'settings' => array(
          'fields' => array(),
          'spaces' => '[^[:alnum:]]',
          'ignorable' => '[\']',
        ),
      ),
      'search_api_stopwords' => array(
        'status' => 1,
        'weight' => 30,
        'settings' => array(
          'fields' => array(
            'field_ring_elements' => TRUE,
            'field_ring_elements_primary' => TRUE,
            'search_api_multi_aggregation_1' => TRUE,
          ),
          'file' => '',
          'stopwords' => '1
          2
          3
          4
          5
          6
          7
          8
          9
          10
          11
          12
          13
          14
          15
          16
          17
          18
          19
          20
          21
          22
          23
          24
          25
          26
          27
          28
          29
          30
          31
          32
          33
          34
          35
          36
          37
          38
          39
          40
          41
          42
          43
          44
          45
          46
          47
          48
          49
          50
          51
          52
          53
          54
          55
          56
          57
          58
          59
          60
          61
          62
          63
          64
          65
          66
          67
          68
          69
          70
          71
          72
          73
          74
          75
          76
          77
          78
          79
          80
          81
          82
          83
          84
          85
          86
          87
          88
          89
          90
          91
          92
          93
          94
          95
          96
          97
          98
          99
          100
          101
          102
          103
          104
          105
          106
          107
          108
          109
          110
          111
          112
          113
          114
          115
          116
          117
          118
          119
          120
          121
          122
          123
          124
          125
          126
          127
          128
          129
          130
          131
          132
          133
          134
          135
          136
          137
          138
          139
          140
          141
          142
          143
          144
          145
          146
          147
          148
          149
          150
          151
          152
          153
          154
          155
          156
          157
          158
          159
          160
          161
          162
          163
          164
          165
          166
          167
          168
          169
          170
          171
          172
          173
          174
          175
          176
          177
          178
          179
          180
          181
          182
          183
          184
          185
          186
          187
          188
          189
          190
          191
          192
          193
          194
          195
          196
          197
          198
          199
          200
          201
          202
          203
          204
          205
          206
          207
          208
          209
          210
          211
          212
          213
          214
          215
          216
          217
          218
          219
          220
          221
          222
          223
          224
          225
          226
          227
          228
          229
          230
          231
          232
          233
          234
          235
          236
          237
          238
          239
          240
          241
          242
          243
          244
          245
          246
          247
          248
          249
          250
          251
          252
          253
          254
          255
          256
          257
          258
          259
          260
          261
          262
          263
          264
          265
          266
          267
          268
          269
          270
          271
          272
          273
          274
          275
          276
          277
          278
          279
          280
          281
          282
          283
          284
          285
          286
          287
          288
          289
          290
          291
          292
          293
          294
          295
          296
          297
          298
          299
          300
          301
          302
          303
          304
          305
          306
          307
          308
          309
          310
          311
          312
          313
          314
          315
          316
          317
          318
          319
          320
          321
          322
          323
          324
          325
          326
          327
          328
          329
          330
          331
          332
          333
          334
          335
          336
          337
          338
          339
          340
          341
          342
          343
          344
          345
          346
          347
          348
          349
          350
          351
          352
          353
          354
          355
          356
          357
          358
          359
          360
          361
          362
          363
          364
          365
          366
          367
          368
          369
          370
          371
          372
          373
          374
          375
          376
          377
          378
          379
          380
          381
          382
          383
          384
          385
          386
          387
          388
          389
          390
          391
          392
          393
          394
          395
          396
          397
          398
          399
          400
          401
          402
          403
          404
          405
          406
          407
          408
          409
          410
          411
          412
          413
          414
          415
          416
          417
          418
          419
          420
          421
          422
          423
          424
          425
          426
          427
          428
          429
          430
          431
          432
          433
          434
          435
          436
          437
          438
          439
          440
          441
          442
          443
          444
          445
          446
          447
          448
          449
          450
          451
          452
          453
          454
          455
          456
          457
          458
          459
          460
          461
          462
          463
          464
          465
          466
          467
          468
          469
          470
          471
          472
          473
          474
          475
          476
          477
          478
          479
          480
          481
          482
          483
          484
          485
          486
          487
          488
          489
          490
          491
          492
          493
          494
          495
          496
          497
          498
          499
          500
          501
          502
          503
          504
          505
          506
          507
          508
          509
          510
          511
          512
          513
          514
          515
          516
          517
          518
          519
          520
          521
          522
          523
          524
          525
          526
          527
          528
          529
          530
          531
          532
          533
          534
          535
          536
          537
          538
          539
          540
          541
          542
          543
          544
          545
          546
          547
          548
          549
          550
          551
          552
          553
          554
          555
          556
          557
          558
          559
          560
          561
          562
          563
          564
          565
          566
          567
          568
          569
          570
          571
          572
          573
          574
          575
          576
          577
          578
          579
          580
          581
          582
          583
          584
          585
          586
          587
          588
          589
          590
          591
          592
          593
          594
          595
          596
          597
          598
          599
          600
          601
          602
          603
          604
          605
          606
          607
          608
          609
          610
          611
          612
          613
          614
          615
          616
          617
          618
          619
          620
          621
          622
          623
          624
          625
          626
          627
          628
          629
          630
          631
          632
          633
          634
          635
          636
          637
          638
          639
          640
          641
          642
          643
          644
          645
          646
          647
          648
          649
          650
          651
          652
          653
          654
          655
          656
          657
          658
          659
          660
          661
          662
          663
          664
          665
          666
          667
          668
          669
          670
          671
          672
          673
          674
          675
          676
          677
          678
          679
          680
          681
          682
          683
          684
          685
          686
          687
          688
          689
          690
          691
          692
          693
          694
          695
          696
          697
          698
          699
          700
          701
          702
          703
          704
          705
          706
          707
          708
          709
          710
          711
          712
          713
          714
          715
          716
          717
          718
          719
          720
          721
          722
          723
          724
          725
          726
          727
          728
          729
          730
          731
          732
          733
          734
          735
          736
          737
          738
          739
          740
          741
          742
          743
          744
          745
          746
          747
          748
          749
          750
          751
          752
          753
          754
          755
          756
          757
          758
          759
          760
          761
          762
          763
          764
          765
          766
          767
          768
          769
          770
          771
          772
          773
          774
          775
          776
          777
          778
          779
          780
          781
          782
          783
          784
          785
          786
          787
          788
          789
          790
          791
          792
          793
          794
          795
          796
          797
          798
          799
          800
          801
          802
          803
          804
          805
          806
          807
          808
          809
          810
          811
          812
          813
          814
          815
          816
          817
          818
          819
          820
          821
          822
          823
          824
          825
          826
          827
          828
          829
          830
          831
          832
          833
          834
          835
          836
          837
          838
          839
          840
          841
          842
          843
          844
          845
          846
          847
          848
          849
          850
          851
          852
          853
          854
          855
          856
          857
          858
          859
          860
          861
          862
          863
          864
          865
          866
          867
          868
          869
          870
          871
          872
          873
          874
          875
          876
          877
          878
          879
          880
          881
          882
          883
          884
          885
          886
          887
          888
          889
          890
          891
          892
          893
          894
          895
          896
          897
          898
          899
          900
          901
          902
          903
          904
          905
          906
          907
          908
          909
          910
          911
          912
          913
          914
          915
          916
          917
          918
          919
          920
          921
          922
          923
          924
          925
          926
          927
          928
          929
          930
          931
          932
          933
          934
          935
          936
          937
          938
          939
          940
          941
          942
          943
          944
          945
          946
          947
          948
          949
          950
          951
          952
          953
          954
          955
          956
          957
          958
          959
          960
          961
          962
          963
          964
          965
          966
          967
          968
          969
          970
          971
          972
          973
          974
          975
          976
          977
          978
          979
          980
          981
          982
          983
          984
          985
          986
          987
          988
          989
          990
          991
          992
          993
          994
          995
          996
          997
          998
          999
          1000',
        ),
      ),
      'search_api_highlighting' => array(
        'status' => 0,
        'weight' => 35,
        'settings' => array(
          'prefix' => '<strong>',
          'suffix' => '</strong>',
          'excerpt' => 1,
          'excerpt_length' => 256,
          'exclude_fields' => array(),
          'highlight' => 'always',
        ),
      ),
    ); /* WAS: '' */
    $data['product_display']->rdf_mapping = array(); /* WAS: '' */
    $data['product_display']->server = 'solr'; /* WAS: 'frontend' */
    unset($data['product_display']->options['additional fields']);
    unset($data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_6']);
    unset($data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_7']);
    unset($data['product_display']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_8']);
    unset($data['product_display']->options['fields']['field_color']);
    unset($data['product_display']->options['fields']['field_color:name']);
    unset($data['product_display']->options['fields']['field_gender']);
    unset($data['product_display']->options['fields']['field_gender:name']);
    unset($data['product_display']->options['fields']['field_product:field_ring_width:name']);
    unset($data['product_display']->options['fields']['field_product:field_storage_capacity:name']);
    unset($data['product_display']->options['fields']['field_product:field_top_size:name']);
    unset($data['product_display']->options['fields']['field_product_type:name']);
    unset($data['product_display']->options['fields']['field_ring_elements:name']);
    unset($data['product_display']->options['fields']['field_ring_elements_primary:name']);
    unset($data['product_display']->options['fields']['search_api_aggregation_1']);
    unset($data['product_display']->options['fields']['search_api_aggregation_2']);
    unset($data['product_display']->options['fields']['search_api_aggregation_3']);
    unset($data['product_display']->options['fields']['search_api_aggregation_4']);
    unset($data['product_display']->options['fields']['search_api_aggregation_5']);
    unset($data['product_display']->options['fields']['search_api_aggregation_6']);
    unset($data['product_display']->options['fields']['search_api_aggregation_7']);
    unset($data['product_display']->options['fields']['search_api_aggregation_8']);
    unset($data['product_display']->options['fields']['search_api_aggregation_9']);
  }
}

/**
 * Implements hook_default_search_api_sort_alter().
 */
function trf_site_search_default_search_api_sort_alter(&$data) {
  if (isset($data['product_display__created'])) {
    $data['product_display__created']->default_order = 'desc'; /* WAS: 'asc' */
    $data['product_display__created']->default_sort = 1; /* WAS: 0 */
    $data['product_display__created']->default_sort_no_terms = 1; /* WAS: 0 */
    $data['product_display__created']->rdf_mapping = array(); /* WAS: '' */
    $data['product_display__created']->weight = -100; /* WAS: 20 */
  }
  if (isset($data['product_display__field_product_commerce_price_amount_decimal'])) {
    $data['product_display__field_product_commerce_price_amount_decimal']->options['field_name'] = 'Product variations » Price » Amount (decimal) (Min)'; /* WAS: 'Product » Price » Amount (decimal)' */
    $data['product_display__field_product_commerce_price_amount_decimal']->rdf_mapping = array(); /* WAS: '' */
    $data['product_display__field_product_commerce_price_amount_decimal']->weight = -99; /* WAS: 0 */
  }
  if (isset($data['product_display__title_field'])) {
    $data['product_display__title_field']->rdf_mapping = array(); /* WAS: '' */
    $data['product_display__title_field']->weight = -98; /* WAS: 30 */
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function trf_site_search_default_search_api_server() {
  $items = array();
  $items['frontend'] = entity_import('search_api_server', '{
    "name" : "Frontend",
    "machine_name" : "frontend",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : []
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "solr",
    "description" : "Apache Solr search server.",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "solr.internal",
      "port" : "8080",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
