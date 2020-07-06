#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	BLAS - idmax, ismax + step 1;
//	F90 - MAXLO

void IdxMaxWholeFirstMat(
    int n, int m, double x[n][m], int z[n] ) {

    double val;
    int i, j, loc;
    for( i= 0; i<n; i++ ) {
        loc = 1;
        val  = x[0][i];
        for( j=  1; j<m; j++ ) {
	    if( x[j][i] > val ) {
	    	loc = j;
	    	val  = x[j][i];
	    }
        }
        z[i] = loc;
    }
}