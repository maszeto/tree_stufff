#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - idmax, ismax;
//	F90 - MAXLOC + triplet;

void IdxMaxSectVec(
    int n, double x[n], int *z,
    int startx, int stopx, int stepx ) {

    double xmax;
    int i;
    int t = startx;
    xmax  = x[startx];
    for( i= startx+1; i<stopx; i+= stepx ) {
        if( x[i] > xmax ) {
            t = i;
    	    xmax  = x[i];
        }
    }
    *z = t;
}