#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndSectOneScaMatCol(
    int m, int n, int p, BOOL x, BOOL z[n][m], BOOL y[n][m],
    int sz1, int ez1, int bz1, int sy1, int ey1, int by1 ){

    int j,i;
    j= bz1;
    for( i= by1; i<ey1; i+= sy1 ) {
	z[j][p]= x & y[i][p];
        j+= sz1;
    }
}