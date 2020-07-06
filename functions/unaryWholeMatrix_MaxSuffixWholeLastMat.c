#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - MAXVAL_SUFFIX;

void MaxSuffixWholeLastMat(
    int n, int m, double x[n][m], double y[n][m] ) {

    int i, j;
    for( i=0; i<n; i++ ) {
        y[i][m] = x[i][m];
        for( j = m-1; j>0; j += -1 ) {
	    y[i][j] = fmax( y[i][j+1], x[i][j]);
        }
    }
}