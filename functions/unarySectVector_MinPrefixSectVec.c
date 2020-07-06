#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - MINVAL_PREFIX + triplet;

void MinPrefixSectVec(
    int n, double x[n], double y[n],
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy ) {

    int ix, iy;
    stepx = abs(stepx);
    stepy = abs(stepy);
    y[starty] = x[startx];
    iy    = starty+1;
    for( ix= startx+1; ix<stopx; ix+= stepx ) {
        y[iy] = fmin(y[iy-1], x[ix]);
        iy   = iy + stepy;
    }
}
