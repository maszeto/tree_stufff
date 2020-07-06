#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndWholeMatRowVec(
    int n, int m, BOOL x[n][m], BOOL y[n], BOOL z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[i][j] = x[i][j] & y[j];
        }
    }
}