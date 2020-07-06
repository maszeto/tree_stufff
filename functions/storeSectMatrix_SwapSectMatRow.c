void SwapSectMatRow(
    int nx, int mx, double x[nx][mx], int p, int q,
    int startz2, int stopz2, int stepz2 ) {

    double temp;
    int jz;
    for( jz= startz2; jz<stopz2; jz+= stepz2 ) {
        temp = x[p][jz];
        x[p][jz] = x[q][jz];
        x[q][jz] = temp;
    }
}