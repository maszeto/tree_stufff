void SwapIndexMatRow(
    int n, int m, double x[n][m], int p, int q, int *ix ) {

    double t;
    int i;
    for( i= 0; i<m; ++i ) {
        t= x[p][ix[i]];
        x[p][ix[i]]= x[q][ix[i]];
        x[q][ix[i]]= t;
    }
}