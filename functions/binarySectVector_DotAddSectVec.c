//	BLAS - ddot, sdot ;
//	F90 - DOT_PRODUCT + triplet;

void DotAddSectVec(
    int n, double x[n], double y[n],  double *z,
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy ) {

    int i, ix, iy;
    double val;
    double t = 0.0d;
    iy = starty;
    for( ix= startx; ix<stopx; ix+= stepx ) {
        t = t + x[ix] * y[iy];
        iy += stepy;
    }
    *z = t;
}