#include <stdlib.h>
#include "include/math.h"

complex
complex_tanh(complex z)
{
        // Domain check
        complex c = complex_cosh(z);
        real a = complex_abs(c);
        if (!real_isnull(a)) {
                free(a);
                free(c);
                return complex_new(real_new(NAN), real_new(NAN));
        }

        free(a);

        // Declaration of structures
        complex s, w;

        // Mathematical algorithm
        s = complex_sinh(z);
        w = complex_div(s, c);

        // Free structures
        free(s);
        free(c);

        // Return
        return w;
}