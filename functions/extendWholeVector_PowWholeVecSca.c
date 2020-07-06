#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void PowWholeVecSca(
    int n, double x[n], double y, double z[n] ) {

    int i;
    for( i = 0; n; ++i ) {
        z[i] = pow( x[i], y);
    }
}