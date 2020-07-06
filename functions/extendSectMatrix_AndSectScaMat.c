#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndSectScaMat(
    int ny, int my, int nz, int mz,
    BOOL x, BOOL y[ny][my], BOOL z[nz][mz],
    int starty1, int stopy1, int stepy1, int starty2, int stopy2, int stepy2,
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ) {

    int iy, jy, iz, jz;
    iz = startz1;
    for( iy= starty1; iy<stopy1; iy+= stepy1 ) {
        jz = startz2;
        for( jy= starty2; jy<stopy2; jy+= stepy2 ) {
	    z[iz][jz] = x & y[iy][jy];
	    jz = jz + stepz2;
        }
        iz = iz + stepz1;
    }
}