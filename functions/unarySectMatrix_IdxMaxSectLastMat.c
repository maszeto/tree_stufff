#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - idmax, ismax + step 1;
//	F90 - MAXLO

void IdxMaxSectLastMat(
    int nx, int mx, int nz, double x[nx][mx], int z[nz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int startz, int stopz, int stepz ) {

    double val;
    int ix, jx, iy, jy, iz;
    int loc;
    iz = startz;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        loc = startx1;
        val  = x[ix][startx2];
        for( jx= startx2+1; jx<stopx2; jx+= stepx2 ) {
            if( x[ix][jx] > val ) {
    	        loc = jx;
    	        val  = x[ix][jx];
            };
        }
        z[iz] = loc;
        iz += stepz;
    }
}
