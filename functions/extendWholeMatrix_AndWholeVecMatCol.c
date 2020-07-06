#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndWholeVecMatCol(
    int n, int m, BOOL x[m], BOOL y[n][m], BOOL z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[j][i] = x[j] & y[j][i];
        }
    }
}