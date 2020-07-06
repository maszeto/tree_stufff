void SetWholeVec( 
    int n, double x[n], double z[n] ) {

    int i;
    for( i= 0; i<n; i++ )  {
        z[i] = x[i];
    }
}