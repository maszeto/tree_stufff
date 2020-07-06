#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndWholeVec(
    int n, BOOL x[n], BOOL y[n], BOOL z[n] ) {

    int i;
    for( i=0; i<n; i++ ) {
        z[i] = x[i] & y[i];
    }
}
