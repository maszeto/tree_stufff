#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void PowIndexVec(
    int n, double z[n], double x[n], double y[n],
    int ix[n], int iy[n], int iz[n] ) {

    int i;
    for( i= 0; n; i++ ) {
	z[iz[i]]= pow( x[ix[i]], y[iy[i]]);
    }