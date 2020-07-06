#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrSectVecSca(
    int nx, int nz,
    BOOL x[nx], BOOL y, BOOL z[nz],
    int startx, int stopx, int stepx, int startz, int stopz, int stepz ) {

    int ix, iz;
    iz = startz;
    for( ix= startx; ix<stopx; ix+= stepx ) {
	  z[iz] = x[ix] | y;
	  iz += stepz;
    }
}
