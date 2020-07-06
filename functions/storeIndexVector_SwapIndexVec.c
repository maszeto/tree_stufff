void SwapIndexVec(
    int n, double x[n], double y[n], int ix[n], int iy[n] ) {

    double t;
    int i;
    for( i= 0; i<n; ++i ) {
        t= x[ix[i]];
        x[ix[i]]= y[iy[i]];
        y[iy[i]]= t;
    }
}