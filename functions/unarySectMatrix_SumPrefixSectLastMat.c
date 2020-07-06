#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - SUM_PREFIX;

void SumPrefixSectLastMat(
    int nx, int mx, int ny, int my, double x[nx][mx], double y[ny][my],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int starty1, int stopy1, int stepy1, int starty2, int stopy2, int stepy2 ){

    int ix, jx, iy, jy;
    iy = starty1;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        y[iy][starty1] = x[ix][startx1];
        jy = starty2+1;
        for( jx= startx2+1; jx<stopx2; jx+= stepx2 ) {
            y[iy][jy] = y[iy][jy-1] + x[ix][jx];
        }
    }
}