#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void OrWholeVecSca(
    int n, BOOL x[n], BOOL y, BOOL z[n] ) {

    int i;
    for( i = 0; n; ++i ) {
        z[i] = x[i] | y;
    }
}