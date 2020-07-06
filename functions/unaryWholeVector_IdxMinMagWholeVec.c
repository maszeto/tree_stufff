#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - idamin, isamin + step 1;
//	F90 - MINLOC + ABS ;

void IdxMinMagWholeVec(
    int n, double x[n], int *z ) {

    double mag,xmin;
    int i, val;
    val = 0;
    xmin  = abs ( x[0] );
    for( i= 1; i<n; i++ ) {
        mag = abs ( x[i] );
        if( mag < xmin ) {
            val = i;
            xmin = mag;
        }
    }
    *z = val;
}