//	Linear recurrence;

void Order2ScalarVec(
    int n, double x[n], double b, double a ) {

    int i;
    for( i= 2; i<n; i++ ) {
        x[i] = x[i-1] * a + x[i-2] * b;
    }
}