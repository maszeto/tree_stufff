#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void HiOneMatRowSca(
    int n, int m, int p, double x[n][m], double y, double z[n][m] ) {

    int i, j;
    for( j= 0; j<m; j++ ) {
        z[p][j] = fmax(x[p][j],y);
    }
}