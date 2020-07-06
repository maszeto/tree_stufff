#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrOneMatColSca(
    int n, int m, int p, BOOL x[n][m], BOOL y, BOOL z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        z[i][p] = x[i][p] | y;
    }
}