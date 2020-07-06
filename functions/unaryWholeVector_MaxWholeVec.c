#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - dmax, smax + step 1;
//	F90 - MAXVAL;

void MaxWholeVec(
    int n, double x[n], double *z ) {

    int i;
    double val = -DBL_MAX;
    for( i= 0; i<n; i++ ) {
        val = fmax(val, x[i]);
    }
    *z = val;
}