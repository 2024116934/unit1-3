// ELEC2645 Unit 1.3 Activity 3: Value vs Reference
// Demonstrates passing values and addresses to functions in C.

#include <stdio.h>
#include "activity3_geometry.h"

int main(void) {
    // -------------------- CIRCLE --------------------
    double radius = 2.5;
    double area = 0.0, circ = 0.0, diam = 0.0;

    circle_props(radius, &area, &circ, &diam);
    printf("Circle: r=%.2f -> Area=%.2f, Circ=%.2f, Diam=%.2f\n",
           radius, area, circ, diam);

    circle_set_diameter(&radius, 12.0);
    circle_props(radius, &area, &circ, &diam);
    printf("New Circle: r=%.2f -> Area=%.2f, Circ=%.2f, Diam=%.2f\n",
           radius, area, circ, diam);

    // -------------------- RECTANGLE --------------------
    double width = 3.0, height = 4.0;
    double rect_area = 0.0, rect_perimeter = 0.0;

    rect_props(width, height, &rect_area, &rect_perimeter);
    printf("Rect: Width=%.2f, Height=%.2f -> Area=%.2f, Perim=%.2f\n",
           width, height, rect_area, rect_perimeter);

    rect_set(&width, &height, 10.0, 2.5);
    rect_props(width, height, &rect_area, &rect_perimeter);
    printf("New Rect: Width=%.2f, Height=%.2f -> Area=%.2f, Perim=%.2f\n",
           width, height, rect_area, rect_perimeter);

    return 0;
}
