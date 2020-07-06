void SwapWholeMatRow(
    int n, int m, double x[n][m], int p, int q ) {
    
    double temp;
    int i, j;
    for( j= 0; j<m; j++ ) {
        temp = x[p][j];
        x[p][j] = x[q][j];
        x[q][j] = temp;
    }
}
