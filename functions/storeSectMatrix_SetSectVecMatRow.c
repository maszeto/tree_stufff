void SetSectVecMatRow(
    int nx, int mx, int nz, int mz, double x[nx][mx], double z[mz], int p,
    int startx2, int stopx2, int stepx2, int startz, int stopz, int stepz ) {

    int jx, jz;
    jx = startx2;
    for( jz= startz; jz<stopz; jz+= stepz ) {
        z[jz] = x[p][jx];
        jx = jx + stepx2;
    }
}