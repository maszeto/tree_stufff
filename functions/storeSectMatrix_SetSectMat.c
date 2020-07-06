void SetSectMat(
    int nx, int mx, int nz, int mz, double x[nx][mx], double z[nz][mz],
    int startx1, int stopx1, int stepx1, int startx2, int stopx2, int stepx2,
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ) {

    int ix, jx, iz, jz;
    ix = startx1;
    for( iz = startz1; iz<stopz1; iz+= stepz1 ) {
        jx = startx2;
        for( jz= startz2; jz<stopz2; jz+= stepz2 ) {
            z[iz][jz] = x[ix][jx];
            jx = jx + stepx2;
        }
        ix = ix + stepx1;
    }
}