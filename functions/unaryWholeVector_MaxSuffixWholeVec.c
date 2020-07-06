#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - MAXVAL_SUFFIX;

void MaxSuffixWholeVec(
    int n, double x[n], double y[n] ) {

    int i;
    y[n-1] = x[n-1];
    for( i= n-2; i>1; i+= -1 ) {
        y[i] = fmax( y[i+1], x[i]);
    }
}