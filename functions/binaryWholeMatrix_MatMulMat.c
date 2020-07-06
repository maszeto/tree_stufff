//	F90 -	z = matmul(x,y);
//	BLAS3 - GEMV;

void MatMulMat(
    int n, int m, int p, double x[n][p], double y[p][m], double z[n][m] ) {

    int i, j, k;
    for( i= 0; i<n; i++ ) {
        for( j= 0; j<m; j++ ) {
	    z[i][j] =0.0d;
	    for( k=0; k<p; k++ ) {
	        z[i][j] = z[i][j] + x[i][k] * y[k][j];
	    }
        }
    }
}