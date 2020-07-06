#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - dmin, smin + step 1;
//	F90 - MINVAL;

void MinWholeVec(
    int n, double x[n], double *z ) {

    int i, ix;
    double val = DBL_MAX;
    for( i= 0; i<n; i++ ) {
        val = fmin(val, x[i]);
    }
    *z = val;
}