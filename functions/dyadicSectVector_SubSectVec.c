#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void SubSectVec(
    int n, double x[n], double y[n], double z[n],
    int startx, int stopx, int stepx, int starty, int stopy, int stepy,
    int startz, int stopz, int stepz ) {

    int ix,iy,iz;
    iy = starty;
    iz = startz;
    for( ix= startx; ix<stopx; ix+= stepx ) {
	  z[iz] = x[ix] - y[iy];
	  iy = iy + stepy;
	  iz = iz + stepz;
    }
}
