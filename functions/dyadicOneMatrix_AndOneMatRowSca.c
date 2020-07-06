#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndOneMatRowSca(
    int n, int m, int p, BOOL x[n][m], BOOL y, BOOL z[n][m] ) {

    int i, j;
    for( j= 0; j<m; j++ ) {
        z[p][j] = x[p][j] & y;
    }
}