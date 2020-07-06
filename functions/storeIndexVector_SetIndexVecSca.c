void SetIndexVecSca(
    int n, double x, double z[n], int iz[n] ) {

    int i;
    for( i= 0; i<n; ++i ) {
        z[iz[i]]= x;
    }
}