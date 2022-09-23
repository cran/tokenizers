// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// generate_ngrams_batch
ListOf<CharacterVector> generate_ngrams_batch(const ListOf<const CharacterVector> documents_list, const int ngram_min, const int ngram_max, CharacterVector stopwords, const String ngram_delim);
RcppExport SEXP _tokenizers_generate_ngrams_batch(SEXP documents_listSEXP, SEXP ngram_minSEXP, SEXP ngram_maxSEXP, SEXP stopwordsSEXP, SEXP ngram_delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const ListOf<const CharacterVector> >::type documents_list(documents_listSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_max(ngram_maxSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type stopwords(stopwordsSEXP);
    Rcpp::traits::input_parameter< const String >::type ngram_delim(ngram_delimSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_ngrams_batch(documents_list, ngram_min, ngram_max, stopwords, ngram_delim));
    return rcpp_result_gen;
END_RCPP
}
// skip_ngrams_vectorised
ListOf<CharacterVector> skip_ngrams_vectorised(ListOf<CharacterVector> words, ListOf<NumericVector> skips, CharacterVector stopwords);
RcppExport SEXP _tokenizers_skip_ngrams_vectorised(SEXP wordsSEXP, SEXP skipsSEXP, SEXP stopwordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< ListOf<NumericVector> >::type skips(skipsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type stopwords(stopwordsSEXP);
    rcpp_result_gen = Rcpp::wrap(skip_ngrams_vectorised(words, skips, stopwords));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tokenizers_generate_ngrams_batch", (DL_FUNC) &_tokenizers_generate_ngrams_batch, 5},
    {"_tokenizers_skip_ngrams_vectorised", (DL_FUNC) &_tokenizers_skip_ngrams_vectorised, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_tokenizers(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
