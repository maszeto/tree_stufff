//	covers assigned constants and scalars;

void SetSectMatColSca(
    int nz, int mz, double x, double z[nz][mz], int p,
    int startz1, int stopz1, int stepz1 ) {

    int iz;
    for( iz = startz1; iz<stopz1; iz+= stepz1 ) {
        z[iz][p] = x;
    }
}