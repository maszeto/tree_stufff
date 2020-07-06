#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - idamin, isamin;
//	F90 - MINLOC + ABS + triplet;

void IdxMinMagSectVec(
    int n, double x[n], int *z,
    int startx, int stopx, int stepx ) {

    double mag,xmin;
    int i;
    int t = startx;
    xmin  = fabs ( x[startx] );
    for( i= startx+1; i<stopx; i+= stepx ) {
        mag = fabs ( x[i] );
        if( mag < xmin ) {
            t = i;
            xmin = mag;
        }
    }
    *z = t;
}
