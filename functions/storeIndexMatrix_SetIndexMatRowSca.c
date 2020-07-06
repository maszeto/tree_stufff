void SetIndexMatRowSca(
    int n, int m, double x, double z[n][m], int p, int *iz ) {

    int i;
    for( i= 0; i<m; ++i ) {
        z[p][iz[i]]= x;
    }
}