#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void PowSectVecSca(
    int nx, int nz,
    double x[nx], double y, double z[nz],
    int startx, int stopx, int stepx, int startz, int stopz, int stepz ) {

    int ix, iz;
    iz = startz;
    for( ix= startx; ix<stopx; ix+= stepx ) {
	  z[iz] = pow(x[ix], y);
	  iz += stepz;
    }
}