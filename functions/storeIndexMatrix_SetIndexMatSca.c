void SetIndexMatSca(
    int n, int m, double x, double z[n][m], int *iz1, int *iz2 ) {

    int j,i;
    for( i= 0; i<n; ++i ) {
        for( j= 0; j<m; ++j ) {
            z[iz1[i]][iz2[j]]= x;
        }
    }
}