//	Linear recurrence;

void Order1VectorVec(
    int n, double x[n], double b[n], double a[n] ) {

    int i;
    for( i= 1; i<n; i++ ) {
        x[i] = x[i-1] * a[i] + b[i];
    }
}