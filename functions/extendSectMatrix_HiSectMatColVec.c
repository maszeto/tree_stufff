#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void HiSectMatColVec(
    int nx, int mx, int my, int nz, int mz,
    double x[nx][mx], double y[my], double z[nz][mz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int starty, int stopy, int stepy,
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ) {

    int ix, jx, iy, jy, iz, jz;
    iz = startz1;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        jy = starty;
        jz = startz2;
        for( jx= startx2; jx<stopx2; jx+= stepx2 ) {
	    z[jz][iz] = fmax(x[jx][ix],y[jy]);
	    jy = jy + stepy;
	    jz = jz + stepz2;
        }
        iz = iz + stepz1;
    }
}