void SetWholeMatColVec(
    int n, int m, double x[n], double z[n][m], int p ) {

    int i;
    for( i= 0; i<n; i++) {;
        z[i][p] = x[i];
    }
}