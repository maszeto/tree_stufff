void SetIndexMat(
    int n, int m, double x[n][m], double z[n][m], 
    int *ix1, int *ix2, int *iz1, int *iz2 ) {

    int j,i;
    for( i= 0; i<n; ++i ) {
        for( j= 0; j<m; ++j ) {
            z[iz1[i]][iz2[j]]= x[ix1[i]][ix2[j]];
        }
    }
}