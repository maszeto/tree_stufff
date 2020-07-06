//       BLAS - daxpy, saxpy + step 1;
//       F90 - array expression;

void VecopWholeVec(
    int n, double a, double x[n], double y[n] ) {

    int i;
    for( i= 0; i<n; i++ ) {
        y[i] = a * x[i] + y[i];
    }
}