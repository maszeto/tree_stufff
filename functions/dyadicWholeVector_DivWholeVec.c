#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void DivWholeVec(
    int n, double x[n], double y[n], double z[n] ) {

    int i;
    for( i=0; i<n; i++ ) {
        z[i] = x[i] / y[i];
    }
}