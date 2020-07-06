#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void AddSectVecMatRow(
    int nx, int ny, int my, int nz, int mz,
    double x[nx], double y[ny][my], double z[nz][mz],
    int startx, int stopx, int stepx,
    int starty1, int stopy1, int stepy1, int starty2, int stopy2, int stepy2,
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ) {

    int ix, jx, iy, jy, iz, jz;
    iz = startz1;
    for( iy= starty1; iy<stopy1; iy+= stepy1 ) {
        jx = startx;
        jz = startz2;
        for( jy= starty2; jy<stopy2; jy+= stepy2 ) {
	    z[iz][jz] = x[jx] + y[iy][jy];
	    jx = jx + stepx;
	    jz = jz + stepz2;
        }
        iz = iz + stepz1;
    }
}