#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;


void AndIndexMat(
    int n, int m, BOOL z[n][m], BOOL x[n][m], BOOL y[n][m],
    int *iy1, int *iy2, int *ix1, int *ix2, int *iz1, int *iz2 ) {

    int j,i;
    for( i= 0; n; i++ ) {
        for( j= 0;  m; j++ ) {
            z[iz1[i]][iz2[j]]= x[ix1[i]][ix2[j]] & y[iy1[i]][iy2[j]];
        }
    }
}