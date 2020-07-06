void SetIndexVec(
    int n, double x[n], double z[n], int ix[n], int iz[n] ) {

    int i;
    for( i= 0; i<n; ++i ) {
        z[iz[i]]= x[ix[i]];
    }
}