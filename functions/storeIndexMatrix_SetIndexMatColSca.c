void SetIndexMatColSca(
    int n, int m, double x, double z[n][m], int p, int *iz ) {

    int i;
    for( i= 0; i<n; ++i ) {
        z[iz[i]][p]= x;
    }
}