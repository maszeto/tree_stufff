void SetWholeVecMatRow(
    int n, int m, double x[n][m], double z[m], int p ) {

    int j;
    for( j= 0; j<m; j++ ) {
        z[j] = x[p][j];
    }
}