void SwapWholeMatCol(
    int n, int m, double x[n][m], int p, int q ) {

    double temp;
    int i, j;
    for( i= 0; i<n; i++) {;
        temp = x[i][p];
        x[i][p] = x[i][q];
        x[i][q] = temp;
    }
}
