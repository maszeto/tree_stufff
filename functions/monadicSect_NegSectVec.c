#include <math.h>
#include <stdlib.h>


void NegSectVec(
    int n, double x[n], double z[n],
    int bx, int ex, int sx, int bz, int ez, int sz ) {

    int ix, iz;
    ix = bx;
    for( iz= bz; iz<ez; iz+= sz) {
        z[iz] = -x[ix] ;
        ix += sx;
    }
}