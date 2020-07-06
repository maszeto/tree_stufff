//	covers assigned constants and scalars;

void SetWholeVecSca(
    int n, double x, double z[n] ) {

    int i;
    for( i= 0; i<n; i++ )  {
        z[i] = x;
    }
}