void SwapSectMatCol(
    int nx, int mx, int p, int q, double x[nx][mx],
    int startz1, int stopz1, int stepz1 ) {

    double temp;
    int iz;
    for( iz = startz1; iz<stopz1; iz+= stepz1 ) {
        temp = x[iz][p];
        x[iz][p] = x[iz][q];
        x[iz][q] = temp;
    }
}