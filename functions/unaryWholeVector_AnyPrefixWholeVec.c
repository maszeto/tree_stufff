#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	HPF - ANY_PREFIX;

void AnyPrefixWholeVec(
    int n, BOOL x[n], BOOL y[n] ) {

    int i;
    y[0] = x[0];
    for( i= 1; i<n; i++ ) {
        y[i] = y[i-1] | x[i];
    }
}