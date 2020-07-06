#include <math.h>
#include <stdlib.h>
#include <float.h>
typedef unsigned char BOOL;
#define FALSE 0
#define TRUE 1


//	F90 - ANY;

void AnyWholeLastMat(
    int n, int m, BOOL x[n][m], BOOL z[n] ) {

    int i, j;
    BOOL val;
    for( i= 0; i<n; i++ ) {
	val = FALSE;
        for( j= 0; j<m; j++ ) {
	    val = val | x[i][j];
        }
        z[i] = val;
    }
}