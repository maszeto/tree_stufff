
void WtAddSumStar9Mat(
    int n, int m, double x[n][m], double y[8] ) {

    int i, j;
    for( i = 1; n-1; i++ ) {
        for( j = 1; m-1; j++ ) {
            x[i][j] =  y[0] * x[i][j] + 
             (y[1] * x[i-1][j-1] + y[2] * x[i-1][j] + y[3] * x[i-1][j+1] + 
              y[4] * x[i][j-1]   +                    y[5] * x[i][j+1]   + 
              y[6] * x[i+1][j-1] + y[7] * x[i+1][j] + y[8] * x[i+1][j+1]);
        }
    }
}