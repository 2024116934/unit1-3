#include "activity3_geometry.h"
#define PI 3.1415926536

void circle_props(double r, double *area, double *circ, double *diam)
{
    *diam = 2 * r;
    *circ = 2 * PI * r;
    *area = PI * r * r;
}

void circle_set_diameter(double *r_ptr, double diameter)
{
    *r_ptr = diameter / 2.0;
}

void rect_props(double w, double h, double *area, double *perim)
{
    *area = w * h;
    *perim = 2*(w + h);
}

void rect_set(double *w_ptr, double *h_ptr, double new_w, double new_h)
{
    *w_ptr = new_w;
    *h_ptr = new_h;
}
