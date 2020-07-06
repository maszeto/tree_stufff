//	F90 -	z = dot_product(x,y);
//	BLAS - ddot, sdot + step 1;

void DotAddWholeVec(
    int n, double x[n], double y[n], double *z ) {

    int i;
    double t =0.0d;
    for( i= 0; i<n; i++ ) {
        t = t + x[i] * y[i];
    }
    *z = t;
}