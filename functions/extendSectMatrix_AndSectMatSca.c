#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndSectMatSca(
    int nx, int mx, int nz, int mz,
    BOOL x[nx][mx], BOOL y, BOOL z[nz][mz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ) {

    int ix, jx, iz, jz;
    iz = startz1;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        jz = startz2;
        for( jx= startx2; jx<stopx2; jx+= stepx2 ) {
	    z[iz][jz] = x[ix][jx] & y;
	    jz = jz + stepz2;
        }
        iz = iz + stepz1;
    }
}