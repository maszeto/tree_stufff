#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	BLAS - idmin, ismin + step 1;
//	F90 - MINLOC ;

void IdxMinWholeLastMat(
    int n, int m, double x[n][m], int z[n] ) {

    double val;
    int i, j, loc;
    for( i= 0; i<n; i++ ) {
        loc = 0;
        val  = x[i][0];
        for( j=  1; j<m; j++ ) {
	    if( x[i][j] < val ) {
	    	loc = j;
	    	val  = x[i][j];
	    }
        }
        z[i] = loc;
    }
}