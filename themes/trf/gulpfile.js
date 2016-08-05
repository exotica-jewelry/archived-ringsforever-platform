var gulp = require("gulp"),

// Path variables
urlPath = 'http://www.titaniumringsforever.com',
themePath = '/sites/all/themes/trf/',
cssPath = 'css',
sassPath = 'sass',
jsPath = 'js',
imgPath = 'images',
styleguidePath = 'documentation/styleguide',

// Sass
sass = require("gulp-sass"),
bulkSass = require('gulp-sass-bulk-import'),
moduleImporter = require('sass-module-importer'),

// Preprocess plugins
postcss = require('gulp-postcss'),
filter = require('gulp-filter'),
sourcemaps = require('gulp-sourcemaps'),
autoprefixer = require('autoprefixer'),

// Images
images = require('gulp-imagemin'),

// Documentation
sassdoc = require('sassdoc'),
jsdoc = require("gulp-jsdoc3"),
kss = require('kss'),

// Gulp plugins
beep = require('beepbeep'),
cache = require('gulp-cache'),
notify = require("gulp-notify"),
shell = require('gulp-shell'),
size = require('gulp-size'),
plumber = require('gulp-plumber'),
rename = require('gulp-rename'),
browserSync = require("browser-sync"),
reload = browserSync.reload;


//
// Error handling
//

function errorAlert(error){
  beep();
  notify.onError({
    title: 'Gulp error'
  })(error);
  this.emit("end");
};


//
// Compile Sass
//

gulp.task('sass', function () {
  return gulp.src(sassPath + '/styles.scss')

  // Get Sass inside folders ("folder/*" syntax")
  .pipe(bulkSass())

  // Import Sass from Bower and Node modules
  .pipe(sass({ importer: moduleImporter() }))

  // Catch any Sass errors and prevent them from crashing gulp
  .pipe(plumber({errorHandler: errorAlert}))

  // Convert Sass into CSS
  .pipe(sourcemaps.init())
  .pipe(sass({
    includePaths: ['sass'],
    sourcemap: true,
    sourceComments: 'normal'
  }))

  // Autoprefix properties
  .pipe(postcss([autoprefixer({
    browsers: ['last 2 versions', '> 5%']
  }) ]))

  // Write sourcemap
  .pipe(sourcemaps.write())

  // Save the CSS
  .pipe(gulp.dest(cssPath))

  // Get file size (gzipped)
  .pipe(size({
    gzip: true
  }))

  // Notify to say the task has completed
  .pipe(notify({
    message: 'Sass compiling complete',
    onLast: true
  }))

  // Filtering stream to only CSS files
  .pipe(filter(sassPath + '/**/*.css'))

  .pipe(browserSync.reload({stream:true}));
});


//
// Compile JavaScript
//

gulp.task('js', function () {
  return gulp.src(jsPath + '/**/*.js')
  .pipe(gulp.dest(jsPath))
});


//
// Compress images
//

gulp.task('images', function() {
  gulp.src(imgPath + '/*')

  .pipe(cache(images({
    optimizationLevel: 4,
    progressive: true,
    interlaced: true
  })))

  .pipe(gulp.dest(imgPath + '/min/'))
});


//
// Clear the theme registry with drush
//

gulp.task('drush', shell.task([
  'drush cache-clear theme-registry'
]));


//
// Compile JSDoc
//

gulp.task('jsdoc', function (cb) {
  var jsdocConfig = require('./jsdocConfig.json');
  gulp.src(['README.md', jsPath + '/**/*.js'], {read: false})

  .pipe(jsdoc(jsdocConfig, cb))
});


//
// Compile SassDoc
//

gulp.task('sassdoc', function () {
  return gulp.src(sassPath + '/**/*.scss')
  .pipe(bulkSass())
  .pipe(plumber({errorHandler: errorAlert}))

  .pipe(sassdoc({
    dest: './documentation/sassdoc'
  }))
});


//
// Compile KSS styleguide
//

gulp.task('styleguide', function(){
  return kss({

    source: sassPath,
    destination: styleguidePath,

    // CSS and JS paths are relative to the generated style guide.
    css: [
      '//brick.a.ssl.fastly.net/Lora:400i/Roboto:500,300,700,900',
      '../../' + cssPath + '/styles.css'
    ],
    js: [
      '../../' + jsPath + '/fastclick.min.js',
      '../../' + jsPath + '/jquery.tooltipster.min.js',
      '../../' + jsPath + '/trf.js'
    ],

    homepage: 'documentation/styleguide.md',
    title: 'Titanium Rings Forever style guide',
    rootPath: styleguidePath,
    appRoot: themePath + styleguidePath,
  });
});


//
// Run BrowserSync
//

gulp.task('browser-sync', function() {

  // Watch files
  var files = [
    cssPath + '/styles.css',
    jsPath + '/**/*.js',
    imgPath + '/**/*',
    'templates/**/*.php'
  ];

  // Initialize BrowserSync
  browserSync.init(files, {
    proxy: "trf.dev",
    notify: true,
    open: false
  });
});


//
// Default task to be run with `gulp`
//

gulp.task('default', ['sassdoc', 'styleguide', 'sass', 'jsdoc', 'js', 'images'], function () {
  gulp.watch(sassPath + '/**/*.scss', ['sassdoc', 'styleguide', 'sass']);
  gulp.watch(jsPath + '/**/*.js', ['jsdoc', 'js']);
  gulp.watch(imgPath + '/*' , ['images']);
});
