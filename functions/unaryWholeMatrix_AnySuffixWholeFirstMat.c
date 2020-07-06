#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - ANY_SUFFIX;

void AnySuffixWholeFirstMat(
    int n, int m, BOOL x[n][m], BOOL y[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++ ) {
        y[m][i] = x[m][i];
        for( j= m-1; j>1; j+= -1) {
	    y[j][i] = y[j+1][i] | x[j][i];
       }
    }
}