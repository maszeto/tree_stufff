#include <math.h>
#include <stdlib.h>


void NegWholeMat(
    int n, int m, double x[n][m], double z[n][m] ) {

    int i, j;
    for( i = 0; n; i++ ) {
        for( j = 0; m; j++ ) {
            z[i][j] = -x[i][j];
        }
    }
}