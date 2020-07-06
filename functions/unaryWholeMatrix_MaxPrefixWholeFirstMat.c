#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - MAXVAL_PREFIX;

void MaxPrefixWholeFirstMat(
    int n, int m, double x[n][m], double y[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        y[0][i] = x[0][i];
        for( j=  1; j<m; j++ ) {
	    y[j][i] = fmax( y[j-1][i], x[j][i]);
        }
    }
}