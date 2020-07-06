//	Linear recurrence;

void Order2ScalarOffsetVec(
    int n, double x[n], double a, double b, double c[n] ) {

    int i;
    for( i= 2; i<n; i++ ) {
        x[i] = x[i-1] * a + x[i-2] * b + c[i];
    }
}