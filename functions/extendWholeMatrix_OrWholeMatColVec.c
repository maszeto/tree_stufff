#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrWholeMatColVec(
    int n, int m, BOOL x[n][m], BOOL y[m], BOOL z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[j][i] = x[j][i] | y[j];
        }
    }
}