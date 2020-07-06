//	Linear recurrence;

void Order2VectorOffsetVec(
    int n, double x[n], double a[n], double b[n], double c[n] ) {

    int i;
    for( i= 2; i<n; i++ ) {
        x[i] = x[i-1] * a[i] + x[i-2] * b[i] + c[i];
    }
}