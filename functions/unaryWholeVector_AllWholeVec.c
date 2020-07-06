#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	F90 - ALL;

void AllWholeVec(
    int n, BOOL x[n], BOOL *z ) {

    int i;
    BOOL val = TRUE;
    for( i= 0; i<n; i++ ) {
        val = val & x[i];
    }
    *z = val;
}