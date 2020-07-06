#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - ANY_SUFFIX;

void AnySuffixSectFirstMat(
    int nx, int mx, int ny, int my, BOOL x[nx][mx], BOOL y[ny][my],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int starty1, int stopy1, int stepy1, int starty2, int stopy2, int stepy2 ){

    int ix, jx, iy, jy;
    iy = starty1;
    for( ix= startx1; ix<stopx1; ix+= stepx1 ) {
        y[stopy1][iy] = x[stopx1][ix];
        jy = starty2;
        for( jx= stopx2-1; jx<startx2; jx+= -stepx2 ){
            y[jy][iy] = y[jy+1][iy] | x[jx][ix];
        }
    }
}