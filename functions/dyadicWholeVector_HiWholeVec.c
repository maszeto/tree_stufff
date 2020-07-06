#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void HiWholeVec(
    int n, double x[n], double y[n], double z[n] ) {

    int i;
    for( i=0; i<n; i++ ) {
        z[i] = fmax(x[i], y[i]);
    }
}