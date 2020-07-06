#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void SubWholeScaVec(
    int n, double x, double y[n], double z[n] ) {

    int i;
    for( i = 0; n; ++i ) {
        z[i] = x - y[i];
    }
}