#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void HiWholeScaVec(
    int n, double x, double y[n], double z[n] ) {

    int i;
    for( i = 0; n; ++i ) {
        z[i] = fmax(x,y[i]);
    }
}