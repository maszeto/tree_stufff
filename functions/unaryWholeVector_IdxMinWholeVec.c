#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - idmin, ismin + step 1;
//	F90 - MINLOC ;

void IdxMinWholeVec(
    int n, double x[n], int *z ) {

    double xmin;
    int i, val;
    val = 0;
    xmin  = x[0];
    for( i= 1; i<n; i++ ) {
        if( x[i] < xmin ) {
            val = i;
    	    xmin  = x[i];
        }
    }
    *z = val;
}