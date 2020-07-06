#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - SUM_SUFFIX + triplet;

void SumSuffixSectVec(
    int n, double x[n], double y[n],
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy ) {

    int ix, iy;
    stepx = -abs(stepx);
    stepy = -abs(stepy);
    y[stopy] = x[stopx];
    iy    = stopy-1;
    for( ix= stopx-2; ix>startx-1; ix-= stepx ) {
        y[iy] = y[iy+1] + x[ix];
        iy   = iy + stepy;
    }
}