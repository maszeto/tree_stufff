void SwapWholeVec(
    int n, int m, double x[n], double y[n] ) {

    double temp;
    int i;
    for( i= 0; i<n; i++ )  {
        temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }
}