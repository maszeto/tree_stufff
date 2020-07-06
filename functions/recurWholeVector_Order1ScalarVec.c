//	Linear recurrence;

void Order1ScalarVec(
    int n, double x[n], double b[n], double a ) {

    int i;
    for( i= 1; i<n; i++ ) {
        x[i] = x[i-1] * a + b[i];
    }
}
