#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	BLAS - idmin, ismin;
//	F90 - MINLOC + triplet;

void IdxMinSectVec(
    int n, double x[n], int *z,
    int startx, int stopx, int stepx ) {

    double xmin;
    int i;
    int t = startx;
    xmin  = x[startx];
    for( i= startx+1; i<stopx; i+= stepx ) {
        if( x[i] < xmin ) {
            t = i;
    	    xmin  = x[i];
        }
    }
    *z = t;
}