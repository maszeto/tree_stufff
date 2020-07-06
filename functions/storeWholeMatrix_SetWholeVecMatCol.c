void SetWholeVecMatCol(
    int n, int m, double x[n][m], double z[n], int p ) {

    int i;
    for( i= 0; i<n; i++) {;
        z[i] = x[i][p];
    }
}