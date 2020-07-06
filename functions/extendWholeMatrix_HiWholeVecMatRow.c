#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void HiWholeVecMatRow(
    int n, int m, double x[n], double y[n][m], double z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[i][j] = fmax(x[j],y[i][j]);
        }
    }
}