#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void ModWholeMat(
    int n, int m, double x[n][m], double y[n][m], double z[n][m] ) {

    int i, j;
    for( i=0; i<n; i++ ) {
        for( j=0; j<m; j++ ) {
	    z[i][j] = fmod(x[i][j], y[i][j]);
        }
    }
}