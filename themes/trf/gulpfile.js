var gulp = require("gulp");

// Path variables
var urlPath = 'http://www.titaniumringsforever.com';
var themePath = '/sites/all/themes/trf/';
var cssPath = 'css';
var styleguidePath = 'documentation/styleguide';

// Sass
var sass = require("gulp-sass");
var bulkSass = require('gulp-sass-bulk-import');
var moduleImporter = require('sass-module-importer');

// Preprocess plugins
var autoprefixer = require('gulp-autoprefixer');
var filter = require('gulp-filter');
var sourcemaps = require('gulp-sourcemaps');

// Images
var images = require('gulp-imagemin');

// Documentation
var sassdoc = require('sassdoc');
var jsdoc = require("gulp-jsdoc3");
var styleguide = require('sc5-styleguide');

// Gulp plugins
var cache = require('gulp-cache');
var notify = require("gulp-notify");
var shell = require('gulp-shell');
var size = require('gulp-size');
var rename = require('gulp-rename');
var browserSync = require("browser-sync");
var reload = browserSync.reload;

//
// Compile Sass
//
gulp.task('sass', function () {
  return gulp.src('sass/styles.scss')

  .pipe(bulkSass())

  .pipe(sass({ importer: moduleImporter() }))

  // Convert sass into css
  .pipe(sass({
    includePaths: ['sass'],
    sourcemap: true,
    sourceComments: 'normal',
    onError: function(err) {
      return notify().write(err);
    }
  }))

  // Catch any SCSS errors and prevent them from crashing gulp
  .on('error', function (error) {
    console.error(error);
    this.emit('end');
  })

  // Load existing internal sourcemap
  .pipe(sourcemaps.init({loadMaps: true}))

  // Autoprefix properties
  .pipe(autoprefixer({
    browsers: ['last 2 versions', '> 5%']
  }))

  // Write final .map file
  .pipe(sourcemaps.write())

  // Save the CSS
  .pipe(gulp.dest(cssPath))

  // Get file size (gzipped)
  .pipe(size({
    gzip: true
  }))

  // Notify to say the task has complete
  .pipe(notify({
    message: 'Sass compiling complete',
    onLast: true
  }))

  // Filtering stream to only css files
  .pipe(filter('sass/**/*.css'))

  .pipe(browserSync.reload({stream:true}));
});


//
// Compile JavaScript
//
gulp.task('js', function () {
  return gulp.src('scripts/**/*.js')
  .pipe(gulp.dest('scripts'))

  // Notify to say the task has complete
  .pipe(notify({
    message: 'JavaScript compiling complete',
    onLast: true
  }))
});


//
// Compress images
//
gulp.task('images', function() {
  gulp.src('images/*')

  .pipe(cache(images({
    optimizationLevel: 4,
    progressive: true,
    interlaced: true
  })))

  .pipe(gulp.dest('images/min/'))

  // Notify to say the task has complete
  .pipe(notify({
    message: 'Image compression complete',
    onLast: true
  }))
});


//
// Clear the theme registry with drush
//
gulp.task('drush', shell.task([
  'drush cache-clear theme-registry'
]));


//
// Run BrowserSync
//
gulp.task('browser-sync', function() {

  // Watch files
  var files = [
    'styles/main.css',
    'scripts/**/*.js',
    'images/**/*',
    'templates/**/*.php'
  ];

  // Initialize BrowserSync
  browserSync.init(files, {
    // BrowserSync with a php server
    proxy: "trf.dev",
    notify: true,
    open: false
  });
});


//
// Compile JSDoc
//
// @todo Currently this isn't working after upgrading to JSDoc3, which was
// necessary because of a fatal bug in JSDoc. Investigate and fix.

gulp.task('jsdoc', function (cb) {
//  return gulp.src('scripts/*.js')

//  .pipe(jsdoc(cb))

//  .pipe(jsdoc.generator('./documentation/jsdoc'))

  // Notify to say the task has complete
//  .pipe(notify({
//    message: 'JSDoc update complete',
//    onLast: true
//  }))
});


//
// Compile SassDoc
//
gulp.task('sassdoc', function () {
  return gulp.src('sass/**/*.scss')

  .pipe(sassdoc({
    dest: './documentation/sassdoc'
  }))

  // Notify to say the task has complete
  .pipe(notify({
    message: 'SassDoc update complete',
    onLast: true
  }))
});


//
// Compile SC5 Styleguide
//
gulp.task('styleguide:generate', function() {
  return gulp.src(['sass/**/*.scss'])

  .pipe(styleguide.generate({
      title: 'Titanium Rings Forever style guide',
      server: false,
      rootPath: styleguidePath,
      appRoot: themePath + styleguidePath,
      overviewPath: 'documentation/styleguide.md'
    }))

  .pipe(gulp.dest(styleguidePath))
});

gulp.task('styleguide:applystyles', function() {
  return gulp.src([cssPath + '/main.css'])

    .pipe(sass({
      errLogToConsole: true
    }))

    .pipe(styleguide.applyStyles())

    .pipe(gulp.dest(styleguidePath))

  // Notify to say the task has complete
  .pipe(notify({
    message: 'Styleguide update complete',
    onLast: true
  }))
});

gulp.task('styleguide-watch', ['styleguide'], function() {
  gulp.watch(['sass/**/*.scss'], ['styleguide']);
});

gulp.task('styleguide', ['styleguide:generate', 'styleguide:applystyles']);

//
// Default task to be run with `gulp`
//
gulp.task('default', ['sassdoc', 'styleguide', 'sass', 'jsdoc', 'js', 'images', 'browser-sync'], function () {
  gulp.watch("sass/**/*.scss", ['sassdoc', 'styleguide', 'sass']);
  gulp.watch("scripts/**/*.js", ['jsdoc', 'js']);
  gulp.watch('images/*' , ['images']);
});
