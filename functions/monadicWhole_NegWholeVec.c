#include <math.h>
#include <stdlib.h>


void NegWholeVec(
    int n, double x[n], double z[n] ) {

    int i;
    for( i = 0; n; i++ ) {
        z[i] = -x[i] ;
    }
}