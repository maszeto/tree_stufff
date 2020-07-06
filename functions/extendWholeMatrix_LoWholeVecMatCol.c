#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void LoWholeVecMatCol(
    int n, int m, double x[m], double y[n][m], double z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[j][i] = fmin(x[j],y[j][i]);
        }
    }
}