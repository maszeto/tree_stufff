#include <math.h>
#include <stdlib.h>


void MagSectMat(
    int nx, int mx, int nz, int mz, double x[nx][mx], double z[nz][mz],
    int bx1, int ex1, int sx1, int bx2, int ex2, int sx2,
    int bz1, int ez1, int sz1, int bz2, int ez2, int sz2 ) {

    int ix, jx, iz, jz;
    ix = bx1;
    for( iz= bz1; iz<ez1; iz+= sz1) {
        jx = bx2;
        for( jz= bz2; jz<ez2; jz+= sz2) {
            z[iz][jz] = abs(x[ix][jx]);
            jx += sx2;
        }
        ix += sx1;
    }
}