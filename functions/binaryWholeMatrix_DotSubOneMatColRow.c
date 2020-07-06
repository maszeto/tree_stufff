//	F90 -	z = z - dot_product(x(:,k),y(l,:n));
//	BLAS - ddot, sdot + step 1;

void DotSubOneMatColRow(
    int n, int m, int p, double x[n][m], double y[m][p], double *z, int k, int l ) {

    int i;
    double t = 0.0d;
    for( i= 0; i<n; i++ ) {
        t = t - x[i][k] * y[l][i];
    }
    *z = t;
}