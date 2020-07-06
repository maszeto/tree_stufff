#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void LoWholeMatColVec(
    int n, int m, double x[n][m], double y[m], double z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[j][i] = fmin(x[j][i],y[j]);
        }
    }
}