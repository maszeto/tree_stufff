#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void ModOneScaMatCol(
    int n, int m, int p, double x, double y[n][m], double z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        z[i][p] = fmod(x,y[i][p]);
    }
}