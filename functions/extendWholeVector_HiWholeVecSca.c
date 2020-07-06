#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void HiWholeVecSca(
    int n, double x[n], double y, double z[n] ) {

    int i;
    for( i = 0; n; ++i ) {
        z[i] = fmax(x[i],y);
    }
}