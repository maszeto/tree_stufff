void SetSectVecMatCol(
    int nx, int mx, int nz, double x[nx][mx], double z[nz], int p,
    int startx1, int stopx1, int stepx1, int startz, int stopz, int stepz ) {

    int ix, iz;
    ix = startx1;
    for( iz= startz; iz<stopz; iz+= stepz ) {
        z[iz] = x[ix][p];
        ix = ix + stepx1;
    }
}