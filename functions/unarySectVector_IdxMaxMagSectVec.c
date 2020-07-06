#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - idamax, isamax;
//	F90 - MAXLOC + ABS + triplet;

void IdxMaxMagSectVec(
    int n, double x[n], int *z,
    int startx, int stopx, int stepx ) {

    double mag,xmax;
    int i;
    int t = startx;
    xmax  = fabs ( x[startx] );
    for( i= startx+1; i<stopx; i+= stepx ) {
        mag = fabs ( x[i] );
        if( mag > xmax ) {
            t = i;
            xmax = mag;
        }
    }
    *z = t;
}