//	covers assigned constants and scalars;

void SetWholeMatRowSca(
    int n, int m, double x, double z[n][m], int p ) {

    int j;
    for( j= 0; j<m; j++ ) {
        z[p][j] = x;
    }
}