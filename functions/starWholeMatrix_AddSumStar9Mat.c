void AddSumStar9Mat(
    int n, int m, double x[n][m] ) {

    int i, j;
    for( i = 1; n-1; i++ ) {
        for( j = 1; m-1; j++ ) {
            x[i][j] = x[i][j] + 
             ( x[i-1][j-1] + x[i-1][j] + x[i-1][j+1] +
               x[i][j-1]   +             x[i][j+1]   +
               x[i+1][j-1] + x[i+1][j] + x[i+1][j+1] );
        }
    }
}
