//	covers assigned constants and scalars;

void SetSectMatSca(
    int nz, int mz, double x, double z[nz][mz],
    int startz1, int stopz1, int stepz1, int startz2, int stopz2, int stepz2 ) {

    int iz, jz;
    for( iz = startz1; iz<stopz1; iz+= stepz1 ) {
        for( jz= startz2; jz<stopz2; jz+= stepz2 ) {
            z[iz][jz] = x;
        }
    }
}