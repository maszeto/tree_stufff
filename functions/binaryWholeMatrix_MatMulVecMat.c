//	F90 -	z = matmul(x,y);
//	BLAS3 - GEMV;

void MatMulVecMat(
    int n, int m, int p, double x[p], double y[p][m], double z[m] ) {

    int i, j, k;
    for( j= 0; j<m; j++ ) {
        z[j] =0.0d;
        for( k=0; k<p; k++ ) {
	    z[j] = z[j] + x[k] * y[k][j];
        }
    }
}
