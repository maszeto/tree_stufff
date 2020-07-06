#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	BLAS - idamax, isamax + step 1;
//	F90 - MAXLOC + ABS;

void IdxMaxMagWholeFirstMat(
    int n, int m, double x[n][m], int z[n] ) {

    double mag,val;
    int i, j, loc;
    for( i= 0; i<n; i++ ) {
        loc = 1;
        val  = fabs( x[0][i] );
        for( j=  1; j<m; j++ ) {
	    mag = fabs( x[j][i] );
	    if( mag > val ) {
	        loc = j;
	        val = mag ;
	    }
        }
        z[i] = loc;
    }
}
