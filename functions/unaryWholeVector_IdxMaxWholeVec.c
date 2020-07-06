#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	BLAS - idmax, ismax + step 1;
//	F90 - MAXLO

void IdxMaxWholeVec(
    int n, double x[n], int *z ) {

    double xmax;
    int i, val;
    val = 0;
    xmax  = x[0];
    for( i= 1; i<n; i++ ) {
        if( x[i] > xmax ) {
            val = i;
            xmax  = x[i];
        }
    }
    *z = val;
}