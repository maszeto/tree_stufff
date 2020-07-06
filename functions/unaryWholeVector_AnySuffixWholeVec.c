#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define TRUE 1
#define FALSE 0

//	HPF - ANY_SUFFIX;

void AnySuffixWholeVec(
    int n, BOOL x[n], BOOL y[n] ) {

    int i;
    y[n-1]= x[n-1];
    for( i = n-2; i>0; i+= -1 ) {
        y[i] = y[i+1] | x[i];
    }
}