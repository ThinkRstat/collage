// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/tipixel.h"
#include <Rcpp.h>

using namespace Rcpp;

// collage
RawVector collage(List tiles, int width, int height, IntegerVector best_tiles, int size);
RcppExport SEXP tipixel_collage(SEXP tilesSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP best_tilesSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type tiles(tilesSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type best_tiles(best_tilesSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(collage(tiles, width, height, best_tiles, size));
    return rcpp_result_gen;
END_RCPP
}
// find_best_tiles
IntegerVector find_best_tiles(RawVector img, int size, DataFrame base);
RcppExport SEXP tipixel_find_best_tiles(SEXP imgSEXP, SEXP sizeSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(find_best_tiles(img, size, base));
    return rcpp_result_gen;
END_RCPP
}
// gridize_cpp
NumericVector gridize_cpp(NumericVector img, int width, int height, int size, NumericVector rgb, bool mean);
RcppExport SEXP tipixel_gridize_cpp(SEXP imgSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP sizeSEXP, SEXP rgbSEXP, SEXP meanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rgb(rgbSEXP);
    Rcpp::traits::input_parameter< bool >::type mean(meanSEXP);
    rcpp_result_gen = Rcpp::wrap(gridize_cpp(img, width, height, size, rgb, mean));
    return rcpp_result_gen;
END_RCPP
}
