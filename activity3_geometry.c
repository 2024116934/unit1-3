#include "activity3_geometry.h"

// -------------------- CIRCLE --------------------
void circle_props(double r, double *area, double *circumference, double *diameter) {
    if (r < 0.0) r = 0.0;

    *area = PI * r * r;
    *circumference = 2.0 * PI * r;
    *diameter = 2.0 * r;

    // We do not need to return anything because the caller's variables
    // are modified through their addresses.
}

void circle_set_diameter(double *r, double new_diameter) {
    if (new_diameter < 0.0) new_diameter = 0.0;
    *r = new_diameter / 2.0;
}

/* ------------------- RECTANGLE ------------------ */
// Check activity3_geometry.h for the function prototypes and comments,
// then add the two missing rectangle functions here.
