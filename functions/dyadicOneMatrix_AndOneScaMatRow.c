#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndOneScaMatRow(
    int n, int m, int p, BOOL x, BOOL y[n][m], BOOL z[n][m] ) {

    int i, j;
    for( j= 0; j<m; j++ ) {
        z[p][j] = x & y[p][j];
    }
}