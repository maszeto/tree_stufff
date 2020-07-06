#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - ALL_PREFIX + triplet;

void AllPrefixSectVec(
    int n, BOOL x[n], BOOL y[n],
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy ) {

    int ix, iy;
    stepx = abs(stepx);
    stepy = abs(stepy);
    y[starty] = x[startx];
    iy    = starty+1;
    for( ix= startx+1; ix<stopx; ix+= stepx ) {
        y[iy] = y[iy-1] & x[ix];
        iy   = iy + stepy;
    }
}