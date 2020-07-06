#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	F90 - PRODUCT + ABS + triplet;

void ProdMagSectVec(
    int n, double x[n], double *z,
    int startx, int stopx, int stepx ) {

    int i;
    double t =1.0d;
    for( i= startx; i<stopx; i+= stepx ) {
        t = t * fabs( x[i] );
    }
    *z = t;
}