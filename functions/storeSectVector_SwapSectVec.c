void SwapSectVec(
    double *x, double *y, int startz, int stopz, int stepz ) {

    double temp;
    int i;
    for( i=startz; i<stopz; i+= stepz ) {
        temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }
}