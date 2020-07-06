#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void SubSectScaVec(
    int ny, int nz,
    double x, double y[ny], double z[nz],
    int starty, int stopy, int stepy, int startz, int stopz, int stepz ) {

    int iy, iz;
    iz = startz;
    for( iy= starty; iy<stopy; iy+= stepy ) {
        z[iz] = x - y[iy];
        iz += stepz;
    }
}