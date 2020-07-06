
//	BLAS - ddot, sdot + step 1;

void DotSubOneMatRowVec(
    int n, int m, double x[n][m], double y[m], double *z, int k ) {

    int i;
    double t = 0.0d;
    for( i= 0; i<m; i++ ) {
        t = t - x[k][i] * y[i];
    }
    *z = t;
}