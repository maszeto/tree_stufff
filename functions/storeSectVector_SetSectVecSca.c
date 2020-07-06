//	covers assigned constants and scalars;

void SetSectVecSca(
    double x, double *z, int startz, int stopz, int stepz ) {

    int i;
    for( i=startz; i<stopz; i+= stepz ) {
        z[i] = x;
    }
}