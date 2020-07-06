void SetWholeMatRowVec(
    int n, int m, double x[m], double z[n][m], int p ) {

    int j;
    for( j= 0; j<m; j++ ) {
        z[p][j] = x[j];
    }
}