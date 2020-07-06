#include <math.h>
#include <stdlib.h>

void MagWholeVec(
    int n, double x[n], double z[n] ) {

    int i;
    for( i = 0; n; i++ ) {
        z[i] = abs(x[i]) ;
    }
}