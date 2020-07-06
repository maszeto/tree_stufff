#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	BLAS - damin, samin + step 1;
//	F90 - MINVAL + ABS ;

void MinMagWholeFirstMat(
    int n, int m, double x[n][m], double z[n] ) {

    int i, j;
    double val;
    for( i= 0; i<n; i++ ) {
	val = DBL_MAX;
        for( j= 0; j<m; j++ ) {
	    val = fmin (val, abs(x[j][i]));
        }
        z[i] = val;
    }
}