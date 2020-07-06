//	F90 -	z = z - dot_product(x(:,k),y(:,l));
//	BLAS - ddot, sdot + step 1;

void DotSubOneMatColCol(
    int n, int m, int p, double x[n][m], double y[n][p], double *z, int k, int l ) {

    int i;
    double t = 0.0d;
    for( i= 0; i<n; i++ ) {
        t = t - x[i][k] * y[i][l];
    }
    *z = t;
}