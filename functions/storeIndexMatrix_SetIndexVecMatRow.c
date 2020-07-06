void SetIndexVecMatRow(
    int n, int m, double x[n][m], double z[n], int p, int *ix, int *iz ) {

    int i;
    for( i= 0; i<m; ++i ) {
        z[iz[i]]= x[p][ix[i]];
    }
}