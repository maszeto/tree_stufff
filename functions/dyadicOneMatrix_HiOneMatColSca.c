#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void HiOneMatColSca(
    int n, int m, int p, double x[n][m], double y, double z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        z[i][p] = fmax(x[i][p],y);
    }
}