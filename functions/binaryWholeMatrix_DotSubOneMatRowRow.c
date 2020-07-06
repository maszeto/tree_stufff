//	F90 -	z = z - dot_product(x(k,:),y(l,:));
//	BLAS - ddot, sdot + step 1;

void DotSubOneMatRowRow(
    int n, int m, int p, double x[n][m], double y[p][m], double *z, int k, int l ) {

    int i;
    double t = 0.0d;
    for( i= 0; i<m; i++ ) {
        t = t - x[k][i] * y[l][i];
    }
    *z = t;
}