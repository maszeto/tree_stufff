//	Linear recurrence;

void Order2OffsetVec(
    int n, double x[n], double c[n] ) {

    int i;
    for( i= 2; i<n; i++ ) {
        x[i] = x[i-1] + x[i-2] + c[i];
    }
}