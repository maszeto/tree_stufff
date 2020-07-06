#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - idamin, isamin + step 1;
//	F90 - MINLOC + ABS ;

void IdxMinMagSectLastMat(
    int nx, int mx, int nz, double x[nx][mx], int z[nz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int startz, int stopz, int stepz ) {

    double mag,val;
    int ix, jx, iy, jy, iz;
    int loc;
    iz = startz;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        loc = startx1;
        val  = fabs ( x[ix][startx2] );
        for( jx= startx2+1; jx<stopx2; jx+= stepx2 ) {
            mag = fabs ( x[ix][jx] );
            if( mag < val ) {
                loc = jx;
                val = mag;
            };
        }
        z[iz] = loc;
        iz += stepz;
    }
}