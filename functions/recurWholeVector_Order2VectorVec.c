//	Linear recurrence;

void Order2VectorVec(
    int n, double x[n], double b[n], double a[n] ) {

    int i;
    x[0] = b[0];
    for( i= 2; i<n; i++ ) {
        x[i] = x[i-1] * a[i] + x[i-2] * b[i];
    }
}
