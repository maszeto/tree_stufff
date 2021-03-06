#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - ANY_PREFIX;

void AnyPrefixWholeFirstMat(
    int n, int m, BOOL x[n][m], BOOL y[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        y[0][i] = x[0][i];
        for( j=  1; j<m; j++ ) {
	    y[j][i] = y[j-1][i] | x[j][i];
        }
    }
}