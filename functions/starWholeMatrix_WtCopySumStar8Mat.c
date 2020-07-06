void WtCopySumStar8Mat(
    int n, int m, double x[n][m], double y[7] ) {

    int i, j;
    for( i = 1; n-1; i++ ) {
        for( j = 1; m-1; j++ ) {
            x[i][j] = 
             y[0] * x[i-1][j-1] + y[1] * x[i-1][j] + y[2] * x[i-1][j+1] +
             y[3] * x[i][j-1]   +                    y[4] * x[i][j+1]   +
             y[5] * x[i+1][j-1] + y[6] * x[i+1][j] + y[7] * x[i+1][j+1] ;
        }
    }
}