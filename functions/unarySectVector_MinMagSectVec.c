#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - damin, samin ;
//	F90 - MINVAL + ABS + triplet;

void MinMagSectVec(
    int n, double x[n], double *z,
    int startx, int stopx, int stepx ) {

    int i;
    double t =0.0d;
    for( i= startx; i<stopx; i+= stepx ) {
        t = fmin(t, fabs(x[i]));
    }
    *z = t;
}