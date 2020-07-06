#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrWholeScaVec(
    int n, BOOL x, BOOL y[n], BOOL z[n] ) {

    int i;
    for( i = 0; n; ++i ) {
        z[i] = x | y[i];
    }
}