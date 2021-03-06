#ifndef CML_QUATERNION_BASIC_FUNC_H
#define CML_QUATERNION_BASIC_FUNC_H

__CML_BEGIN_DECLS

void cml_quaternion_inplace_add_scalar(cml_quaternion_t*, double);
void cml_quaternion_inplace_add(cml_quaternion_t*, cml_quaternion_t);
void cml_quaternion_inplace_divide_scalar(cml_quaternion_t*, double);
void cml_quaternion_inplace_divide(cml_quaternion_t*, cml_quaternion_t);
void cml_quaternion_inplace_multiply_scalar(cml_quaternion_t*, double);
void cml_quaternion_inplace_multiply(cml_quaternion_t*, cml_quaternion_t);
void cml_quaternion_inplace_scalar_multiply(double, cml_quaternion_t*);
void cml_quaternion_inplace_scalar_add(double, cml_quaternion_t*);
void cml_quaternion_inplace_subtract_scalar(cml_quaternion_t*, double);
void cml_quaternion_inplace_subtract(cml_quaternion_t*, cml_quaternion_t);

cml_quaternion_t cml_quaternion_add_scalar(cml_quaternion_t, double);
cml_quaternion_t cml_quaternion_add(cml_quaternion_t, cml_quaternion_t);
cml_quaternion_t cml_quaternion_conj(cml_quaternion_t);
cml_quaternion_t cml_quaternion_divide_scalar(cml_quaternion_t, double);
cml_quaternion_t cml_quaternion_divide(cml_quaternion_t, cml_quaternion_t);
cml_quaternion_t cml_quaternion_inverse(cml_quaternion_t);
cml_quaternion_t cml_quaternion_multiply_scalar(cml_quaternion_t, double);
cml_quaternion_t cml_quaternion_multiply(cml_quaternion_t, cml_quaternion_t);
cml_quaternion_t cml_quaternion_normalized(cml_quaternion_t);
cml_quaternion_t cml_quaternion_opposite(cml_quaternion_t);
cml_quaternion_t cml_quaternion_scalar_add(double, cml_quaternion_t);
cml_quaternion_t cml_quaternion_scalar_divide(double, cml_quaternion_t);
cml_quaternion_t cml_quaternion_scalar_multiply(double, cml_quaternion_t q);
cml_quaternion_t cml_quaternion_scalar_subtract(double, cml_quaternion_t);
cml_quaternion_t cml_quaternion_subtract_scalar(cml_quaternion_t, double);
cml_quaternion_t cml_quaternion_subtract(cml_quaternion_t, cml_quaternion_t);

double cml_quaternion_norm(cml_quaternion_t);
double cml_quaternion_abs(cml_quaternion_t);
double cml_quaternion_angle(cml_quaternion_t);

__CML_END_DECLS

#endif
