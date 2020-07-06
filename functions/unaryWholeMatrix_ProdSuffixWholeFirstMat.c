#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - PRODUCT_SUFFIX;

void ProdSuffixWholeFirstMat(
    int n, int m, double x[n][m], double y[n][m] ) {

    int i, j;
    for( i=0; i<n; i++ ) {
        y[m][i] = x[m][i];
        for( j = m-1; j>1; j+= -1 ) {
	    y[j][i] = y[j+1][i] * x[j][i];
        }
    }
}