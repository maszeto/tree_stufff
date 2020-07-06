#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - idamax, isamax + step 1;
//	F90 - MAXLOC + ABS;

void IdxMaxMagWholeVec(
    int n, double x[n], int *z ) {

    double mag,xmax;
    int i, val;
    val = 0;
    xmax  = abs ( x[0] );
    for( i= 1; i<n; i++ ) {
        mag = abs ( x[i] );
        if( mag > xmax ) {
            val = i;
            xmax   = mag ;
        }
    }
    *z = val;
}