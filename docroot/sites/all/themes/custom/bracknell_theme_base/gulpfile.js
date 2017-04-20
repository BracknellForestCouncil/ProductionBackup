const gulp       = require('gulp');
const iconizr    = require('gulp-iconizr');

gulp.task('iconizr', function () {
    var config = {
      icons: {
        layout: 'diagonal',
        prefix: '.theme-icon-%s',
        common: 'icon',
        sprite: 'icons.svg',
        bust: false,
        dimensions: true,
        render: {
          css: true,
          scss: true
        }
      }
    };

    return gulp.src('**/*.svg', {cwd: 'images/icons/svg'})
        .pipe(iconizr(config))
        .pipe(gulp.dest('images/icons/dist'));
});
