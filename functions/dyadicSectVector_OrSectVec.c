#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrSectVec(
    int n, BOOL x[n], BOOL y[n], BOOL z[n],
    int startx, int stopx, int stepx, int starty, int stopy, int stepy,
    int startz, int stopz, int stepz ) {

    int ix,iy,iz;
    iy = starty;
    iz = startz;
    for( ix= startx; ix<stopx; ix+= stepx ) {
	  z[iz] = x[ix] | y[iy];
	  iy = iy + stepy;
	  iz = iz + stepz;
    }
}
