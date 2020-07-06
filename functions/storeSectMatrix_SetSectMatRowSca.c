//	covers assigned constants and scalars;

void SetSectMatRowSca(
    int nz, int mz, double x, double z[nz][mz], int p,
    int startz2, int stopz2, int stepz2 ) {

    int jz;
    for( jz= startz2; jz<stopz2; jz+= stepz2 ) {
        z[p][jz] = x;
    }
}