#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - MINVAL_PREFIX;

void MinPrefixWholeLastMat(
    int n, int m, double x[n][m], double y[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        y[i][0] = x[i][0];
        for( j=  1; j<m; j++ ) {
	    y[i][j] = fmin( y[i][j-1], x[i][j]);
        }
    }
}