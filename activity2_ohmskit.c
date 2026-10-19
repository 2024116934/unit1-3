#include "activity2_ohmskit.h"

// --- Ohm's law ---
double v_from_ir(double I, double R) {
    double V = I * R;
    return V;
}

// Missing function: I = V / R

double r_from_vi(double V, double I) {
    double R;

    // Avoid division by zero.
    if (I == 0.0) {
        R = INFINITY;
    } else {
        R = V / I;
    }

    return R;
}

// --- Combinations ---
// Add the missing series and parallel functions here.
