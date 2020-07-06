#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - dmax, smax;
//	F90 - MAXVAL + triplet;

void MaxSectVec(
    int n, double x[n], double *z,
    int startx, int stopx, int stepx ) {

    int i;
    double t = -DBL_MAX;
    for( i= startx; i<stopx; i+= stepx ) {
        t = fmax(t, x[i]);
    }
    *z = t;
}