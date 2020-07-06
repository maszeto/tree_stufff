#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0


//	HPF - MINVAL_PREFIX;

void MinPrefixWholeVec(
    int n, double x[n], double y[n] ) {

    int i;
    y[0] = x[0];
    for( i= 1; i<n; i++ ) {
        y[i] = fmin( y[i-1], x[i]);
    }
}