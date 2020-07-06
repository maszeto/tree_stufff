//	BLAS - daxpy, saxpy;
// 	F90 - array expression + triplet;

void VecopSectVec(
    int n, double a, double x[n], double y[n],
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy ) {

    int i, ix, iy;
    iy = starty;
    for( ix= startx; ix<stopx; ix+= stepx ) {
        y[iy] = a * x[ix] + y[iy];
        iy += stepy;
    }
}