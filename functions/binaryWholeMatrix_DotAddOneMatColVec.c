//	F90 -	z = dot_product(x(:n,k),y(:n));
//	BLAS - ddot, sdot + step 1;

void DotAddOneMatColVec(
    int n, int m, double x[n][m], double y[n], double *z, int k ) {

    int i;
    double t= 0.0d;
    for( i= 0; i<n; i++ ) {
        t = t + x[i][k] * y[i];
    }
    *z = t;
}
