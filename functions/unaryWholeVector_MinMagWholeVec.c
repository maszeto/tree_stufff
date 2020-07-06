#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - damin, samin + step 1;
//	F90 - MINVAL + ABS ;

void MinMagWholeVec(
    int n, double x[n], double *z ) {

    int i;
    double val =0.0d;
    for( i= 0; i<n; i++ ) {
        val = fmin (val, abs(x[i]));
    }
    *z = val;
}
