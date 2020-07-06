void SetSectMatColVec(
    int nx, int nz, int mz, double x[nx], double z[nz][mz], int p,
    int startx, int stopx, int stepx, int startz1, int stopz1, int stepz1 ) {

    int ix, iz;
    ix = startx;
    for( iz = startz1; iz<stopz1; iz+= stepz1 ) {
        z[iz][p] = x[ix];
        ix = ix + stepx;
    }
}