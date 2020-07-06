#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1

//	BLAS - dmax, smax + step 1;
//	F90 - MAXVAL;

void MaxWholeFirstMat(
    int n, int m, double x[n][m], double z[n] ) {

    int i, j;
    double val;
    for( i=0; i<n; i++ ) {
	val = -DBL_MAX;
        for( j= 0; j<m; j++ ) {
	    val = fmax(val, x[j][i]);
        }
        z[i] = val;
    }
}