#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void LoSectOneMatColSca(
    int m, int n, int p, double y, double z[n][m], double x[n][m],
    int sz1, int ez1, int bz1, int sx1, int ex1, int bx1 ) {

    int j,i;
    j= bz1;
    for(i= bx1; i<ex1; i+= sx1 ) {
	z[j][p]= fmin(x[i][p],y);
        j+= sz1;
    }
}
