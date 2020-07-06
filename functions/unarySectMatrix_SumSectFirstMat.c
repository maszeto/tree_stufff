#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - dsum, ssum + step 1;
//	F90 - SUM;

void SumSectFirstMat(
    int nx, int mx, int nz, double x[nx][mx], int z[nz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int startz, int stopz, int stepz ) {

    int ix, jx, iz;
    double val;
    iz = startz;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        val =0.0d;
        for( jx= startx2; jx<stopx2; jx+= stepx2 ) {
            val = val + x[jx][ix];
        }
        z[iz] = val;
        iz += stepz;
    }
}
