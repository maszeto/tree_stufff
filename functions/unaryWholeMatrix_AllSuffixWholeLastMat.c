#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - ALL_SUFFIX;

void AllSuffixWholeLastMat(
    int n, int m, BOOL x[n][m], BOOL y[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        y[i][m] = x[i][m];
        for( j = m-1; j>0; j+= -1 ) {
	    y[i][j] = y[i][j+1] & x[i][j];
        }
    }
}