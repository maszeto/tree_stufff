//	covers assigned constants and scalars;

void SetWholeMatSca(
    int n, int m, double x, double z[n][m] ) {

    int i, j;
    for( i= 0; i<n; i++) {;
        for( j= 0; j<m; j++ ) {
            z[i][j] = x;
        }
    }
}