#ifndef CML_STATISTICS_H
#error "Never use <cml/statistics/uint.h> directly; include <cml/statistics.h> instead."
#endif

#ifndef CML_STATISTICS_UCHAR_H
#define CML_STATISTICS_UCHAR_H

#include <stdlib.h>

__CML_BEGIN_DECLS

double cml_stats_uint_mean(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_variance(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_sd(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_variance_with_fixed_mean(const unsigned int data[], const size_t stride, const size_t n, const double mean);
double cml_stats_uint_sd_with_fixed_mean(const unsigned int data[], const size_t stride, const size_t n, const double mean);
double cml_stats_uint_tss(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_tss_m(const unsigned int data[], const size_t stride, const size_t n, const double mean);

double cml_stats_uint_absdev(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_skew(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_kurtosis(const unsigned int data[], const size_t stride, const size_t n);
double cml_stats_uint_lag1_autocorrelation(const unsigned int data[], const size_t stride, const size_t n);

double cml_stats_uint_covariance(const unsigned int data1[], const size_t stride1,const unsigned int data2[], const size_t stride2, const size_t n);
double cml_stats_uint_correlation(const unsigned int data1[], const size_t stride1,const unsigned int data2[], const size_t stride2, const size_t n);
double cml_stats_uint_spearman(const unsigned int data1[], const size_t stride1, const unsigned int data2[], const size_t stride2, const size_t n, double work[]);

double cml_stats_uint_variance_m(const unsigned int data[], const size_t stride, const size_t n, const double mean);
double cml_stats_uint_sd_m(const unsigned int data[], const size_t stride, const size_t n, const double mean);
double cml_stats_uint_absdev_m(const unsigned int data[], const size_t stride, const size_t n, const double mean);
double cml_stats_uint_skew_m_sd(const unsigned int data[], const size_t stride, const size_t n, const double mean, const double sd);
double cml_stats_uint_kurtosis_m_sd(const unsigned int data[], const size_t stride, const size_t n, const double mean, const double sd);
double cml_stats_uint_lag1_autocorrelation_m(const unsigned int data[], const size_t stride, const size_t n, const double mean);

double cml_stats_uint_covariance_m(const unsigned int data1[], const size_t stride1,const unsigned int data2[], const size_t stride2, const size_t n, const double mean1, const double mean2);


double cml_stats_uint_pvariance(const unsigned int data1[], const size_t stride1, const size_t n1, const unsigned int data2[], const size_t stride2, const size_t n2);
double cml_stats_uint_ttest(const unsigned int data1[], const size_t stride1, const size_t n1, const unsigned int data2[], const size_t stride2, const size_t n2);

unsigned int cml_stats_uint_max(const unsigned int data[], const size_t stride, const size_t n);
unsigned int cml_stats_uint_min(const unsigned int data[], const size_t stride, const size_t n);
void cml_stats_uint_minmax(unsigned int * min, unsigned int * max, const unsigned int data[], const size_t stride, const size_t n);

size_t cml_stats_uint_max_index(const unsigned int data[], const size_t stride, const size_t n);
size_t cml_stats_uint_min_index(const unsigned int data[], const size_t stride, const size_t n);
void cml_stats_uint_minmax_index(size_t * min_index, size_t * max_index, const unsigned int data[], const size_t stride, const size_t n);

double cml_stats_uint_median_from_sorted_data(const unsigned int sorted_data[], const size_t stride, const size_t n);
double cml_stats_uint_quantile_from_sorted_data(const unsigned int sorted_data[], const size_t stride, const size_t n, const double f);

__CML_END_DECLS

#endif /* CML_STATISTICS_UCHAR_H */
