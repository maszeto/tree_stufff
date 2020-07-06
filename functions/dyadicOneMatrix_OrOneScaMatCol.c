#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrOneScaMatCol(
    int n, int m, int p, BOOL x, BOOL y[n][m], BOOL z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        z[i][p] = x | y[i][p];
    }
}