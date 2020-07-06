void SetIndexVecMatCol(
    int n, int m, double x[n][m], double z[n], int p, int *ix, int *iz ) {

    int i;
    for( i= 0; i<n; ++i ) {
        z[iz[i]]= x[ix[i]][p];
    }
}