void SwapIndexMatCol(
    int n, int m, double x[n][m], int p, int q, int *ix ) {

    double t;
    int i;
    for( i= 0; i<n; ++i ) {
        t= x[ix[i]][p];
        x[ix[i]][p]= x[ix[i]][q];
        x[ix[i]][q]= t;
    }
}
