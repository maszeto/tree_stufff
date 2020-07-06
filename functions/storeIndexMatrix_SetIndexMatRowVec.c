void SetIndexMatRowVec(
    int n, int m, double x[m], double z[n][m], int p, int *ix, int *iz ) {

    int i;
    for( i= 0; i<m; ++i ) {
        z[p][iz[i]]= x[ix[i]];
    }
}