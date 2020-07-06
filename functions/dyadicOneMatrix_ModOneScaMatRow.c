#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void ModOneScaMatRow(
    int n, int m, int p, double x, double y[n][m], double z[n][m] ) {

    int i, j;
    for( j= 0; j<m; j++ ) {
        z[p][j] = fmod(x,y[p][j]);
    }
}