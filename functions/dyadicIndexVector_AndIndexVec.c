#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void AndIndexVec(
    int n, BOOL z[n], BOOL x[n], BOOL y[n],
    int ix[n], int iy[n], int iz[n] ) {

    int i;
    for( i= 0; n; i++ ) {
	z[iz[i]]= x[ix[i]] & y[iy[i]];
    }
}