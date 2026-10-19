// activity2_ohmskit.h - simple Ohm's law calculations
// Header files contain function prototypes and definitions that need to be
// shared between multiple C source files.

#ifndef ACTIVITY2_OHMSKIT_H
#define ACTIVITY2_OHMSKIT_H

#include <math.h> // INFINITY, we need the -lm compiler flag

// --- Ohm's law calculations ---
double v_from_ir(double I, double R);   // V = I * R
double i_from_vr(double V, double R);   // I = V / R
double r_from_vi(double V, double I);   // R = V / I

// --- Simple two-resistor combinations ---
double r_series2(double R1, double R2); // R_total = R1 + R2

// Missing prototype: parallel resistance
// R_total = (R1 * R2) / (R1 + R2), handling zero resistance.

#endif // ACTIVITY2_OHMSKIT_H
