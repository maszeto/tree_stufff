//	covers assigned constants and scalars;

void SetWholeMatColSca(
    int n, int m, double x, double z[n][m], int p ) {

    int i;
    for( i= 0; i<n; i++) {;
        z[i][p] = x;
    }
}
