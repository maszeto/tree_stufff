void SetIndexMatColVec(
    int n, int m, double x[n], double z[n][m], int p, int *ix, int *iz ) {

    int i;
    for( i= 0; i<n; ++i ) {
        z[iz[i]][p]= x[ix[i]];
    }
}
