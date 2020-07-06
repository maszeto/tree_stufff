#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - MAXVAL_PREFIX + triplet;

void MaxPrefixSectVec(
    int n, double x[n], double y[n],
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy ) {

    int ix, iy;
    stepx = abs(stepx);
    stepy = abs(stepy);
    y[starty] = x[startx];
    iy    = starty+1;
    for( ix= startx+1; ix<stopx; ix+= stepx ) {
        y[iy] = fmax(y[iy-1], x[ix]);
        iy   = iy + stepy;
    }
}