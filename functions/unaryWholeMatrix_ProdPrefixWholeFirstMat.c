#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	HPF - PRODUCT_PREFIX;

void ProdPrefixWholeFirstMat(
    int n, int m, double x[n][m], double y[n][m] ) {

    int i,j;
    for( i= 0; i<n; i++ ) {
        y[0][i] = x[0][i];
        for( j=  1; j<m; j++ ) {
	    y[j][i] = y[j-1][i] * x[j][i];
        }
    }
}