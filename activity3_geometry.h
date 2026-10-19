#ifndef ACTIVITY3_GEOMETRY_H
#define ACTIVITY3_GEOMETRY_H

#define PI 3.14159265358979323846

// -------------------- CIRCLE --------------------
void circle_props(double r,
                  double *area,
                  double *circumference,
                  double *diameter);

void circle_set_diameter(double *r, double new_diameter);

// -------------------- RECTANGLE --------------------
void rect_props(double w, double h,
                double *area,
                double *perimeter);

void rect_set(double *w, double *h, double new_w, double new_h);

#endif // ACTIVITY3_GEOMETRY_H
