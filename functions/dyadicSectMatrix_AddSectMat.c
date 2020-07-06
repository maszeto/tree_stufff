#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void AddSectMat(
    int nx, int mx, int ny, int my, int nz, int mz,
    double x[nx][mx], double y[ny][my], double z[nz][mz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int starty1, int stopy1, int stepy1, int starty2, int stopy2, int stepy2,
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ){

    int ix, jx, iy, jy, iz, jz;
    iy = starty1;
    iz = startz1;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        jy = starty2;
        jz = startz2;
        for( jx= startx2; jx<stopx2; jx+= stepx2 ) {
	    z[iz][jz] = x[ix][jx] + y[iy][jy];
	    jy = jy + stepy2;
	    jz = jz + stepz2;
        }
        iy += stepy1;
        iz += stepz1;
    }
}