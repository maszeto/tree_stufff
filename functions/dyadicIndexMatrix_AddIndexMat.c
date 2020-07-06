#include <math.h>
#include <stdlib.h>
typedef unsigned char BOOL;

void AddIndexMat(
    int n, int m, double z[n][m], double x[n][m], double y[n][m],
    int *iy1, int *iy2, int *ix1, int *ix2, int *iz1, int *iz2 ) {

    int j,i;
    for( i= 0; n; i++ ) {
        for( j= 0;  m; j++ ) {
            z[iz1[i]][iz2[j]]= x[ix1[i]][ix2[j]] + y[iy1[i]][iy2[j]];
        }
    }
}