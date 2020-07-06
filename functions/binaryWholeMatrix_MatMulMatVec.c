//	F90 -	z = matmul(x,y);
//	BLAS3 - GEMV;

void MatMulMatVec(
    int n, int m, int p, double x[n][p], double y[p], double z[n] ) {

    int i, j, k;
    for( i= 0; i<n; i++ ) {
        z[i] =0.0d;
        for( k=0; k<p; k++ ) {
	    z[i] = z[i] + x[i][k] * y[k];
        }
    }
}