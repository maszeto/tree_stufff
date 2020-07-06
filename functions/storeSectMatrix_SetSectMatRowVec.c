void SetSectMatRowVec(
    int mx, int nz, int mz, double x[mx], double z[nz][mz], int p,
    int startx, int stopx, int stepx, int startz2, int stopz2, int stepz2 ) {

    int jx, jz;
    jx = startx;
    for( jz= startz2; jz<stopz2; jz+= stepz2 ) {
        z[p][jz] = x[jx];
        jx = jx + stepx;
    }
}