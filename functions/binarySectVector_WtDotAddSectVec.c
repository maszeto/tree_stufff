//	BLAS - dwdot, swdot;
//	F90 - array expression;

void WtDotAddSectVec(
    int n, double w[n], double x[n], double y[n], double *z,
    int startx, int stopx, int stepx,
    int starty, int stopy, int stepy,
    int startw, int stopw, int stepw ) {

    int i, ix, iy, iw;
    double val;
    double t = 0.0d;
    iy = startx;
    iw = startw;
    for( ix= startx; ix<stopx; ix+= stepx ) {
        t = t + w[iw] * x[ix] * y[iy];
        iw += stepw;
        iy += stepy;
    }
    *z = t;
}