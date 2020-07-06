#include <stdlib.h>
#include <math.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	F90 - ALL + triplet;

void AllSectVec(
    int n, BOOL x[n], BOOL *z,
    int startx, int stopx, int stepx ) {

    int i;
    BOOL t = TRUE;
    for( i= startx; i<stopx; i+= stepx ) {
        t = t & x[i];
    }
    *z = t;
}