#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	F90 - PRODUCT + ABS;

void ProdMagWholeFirstMat(
    int n, int m, double x[n][m], double z[n] ) {

    int i, j;
    double val;
    for( i= 0; i<n; i++ ) {
        val =1.0d;
        for( j= 0; j<m; j++ ) {
	    val = val * fabs( x[j][i] );
        }
        z[i] = val;
    }
}