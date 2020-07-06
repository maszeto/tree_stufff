#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrWholeVecMatRow(
    int n, int m, BOOL x[n], BOOL y[n][m], BOOL z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[i][j] = x[j] | y[i][j];
        }
    }
}