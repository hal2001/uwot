// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// optimize_layout_umap
void optimize_layout_umap(arma::mat& embedding, const arma::uvec& positive_head, const arma::uvec& positive_tail, int n_epochs, int n_vertices, const arma::vec& epochs_per_sample, double a, double b, double gamma, double initial_alpha, double negative_sample_rate, unsigned int seed, bool verbose);
RcppExport SEXP _uwot_optimize_layout_umap(SEXP embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP aSEXP, SEXP bSEXP, SEXP gammaSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type embedding(embeddingSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    optimize_layout_umap(embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, a, b, gamma, initial_alpha, negative_sample_rate, seed, verbose);
    return R_NilValue;
END_RCPP
}
// optimize_layout_tumap
void optimize_layout_tumap(arma::mat& embedding, const arma::uvec& positive_head, const arma::uvec& positive_tail, int n_epochs, int n_vertices, const arma::vec& epochs_per_sample, double initial_alpha, double negative_sample_rate, unsigned int seed, bool verbose);
RcppExport SEXP _uwot_optimize_layout_tumap(SEXP embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type embedding(embeddingSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    optimize_layout_tumap(embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, initial_alpha, negative_sample_rate, seed, verbose);
    return R_NilValue;
END_RCPP
}
// optimize_layout_largevis
void optimize_layout_largevis(arma::mat& embedding, const arma::uvec& positive_head, const arma::uvec& positive_tail, int n_epochs, int n_vertices, const arma::vec& epochs_per_sample, double gamma, double initial_alpha, double negative_sample_rate, unsigned int seed, bool verbose);
RcppExport SEXP _uwot_optimize_layout_largevis(SEXP embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP gammaSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type embedding(embeddingSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    optimize_layout_largevis(embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, gamma, initial_alpha, negative_sample_rate, seed, verbose);
    return R_NilValue;
END_RCPP
}
// calc_row_probabilities_cpp
arma::sp_mat calc_row_probabilities_cpp(const Rcpp::NumericMatrix& nn_dist, const Rcpp::IntegerMatrix& nn_idx, const double perplexity, const unsigned int n_iter, const double tol, const bool verbose);
RcppExport SEXP _uwot_calc_row_probabilities_cpp(SEXP nn_distSEXP, SEXP nn_idxSEXP, SEXP perplexitySEXP, SEXP n_iterSEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type nn_dist(nn_distSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type nn_idx(nn_idxSEXP);
    Rcpp::traits::input_parameter< const double >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_row_probabilities_cpp(nn_dist, nn_idx, perplexity, n_iter, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// smooth_knn_distances_cpp
arma::sp_mat smooth_knn_distances_cpp(const Rcpp::NumericMatrix& nn_dist, const Rcpp::IntegerMatrix& nn_idx, const unsigned int n_iter, const double local_connectivity, const double bandwidth, const double tol, const double min_k_dist_scale, const bool verbose);
RcppExport SEXP _uwot_smooth_knn_distances_cpp(SEXP nn_distSEXP, SEXP nn_idxSEXP, SEXP n_iterSEXP, SEXP local_connectivitySEXP, SEXP bandwidthSEXP, SEXP tolSEXP, SEXP min_k_dist_scaleSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type nn_dist(nn_distSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type nn_idx(nn_idxSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type local_connectivity(local_connectivitySEXP);
    Rcpp::traits::input_parameter< const double >::type bandwidth(bandwidthSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type min_k_dist_scale(min_k_dist_scaleSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_knn_distances_cpp(nn_dist, nn_idx, n_iter, local_connectivity, bandwidth, tol, min_k_dist_scale, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_uwot_optimize_layout_umap", (DL_FUNC) &_uwot_optimize_layout_umap, 13},
    {"_uwot_optimize_layout_tumap", (DL_FUNC) &_uwot_optimize_layout_tumap, 10},
    {"_uwot_optimize_layout_largevis", (DL_FUNC) &_uwot_optimize_layout_largevis, 11},
    {"_uwot_calc_row_probabilities_cpp", (DL_FUNC) &_uwot_calc_row_probabilities_cpp, 6},
    {"_uwot_smooth_knn_distances_cpp", (DL_FUNC) &_uwot_smooth_knn_distances_cpp, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_uwot(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
