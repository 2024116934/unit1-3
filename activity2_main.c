// ELEC2645 Unit 1.3 Activity 2 - Using Libraries
// Demonstrates a small library for Ohm's law calculations.
// Some functions have not been implemented, so the program does not link yet.

#include <stdio.h>
#include "activity2_ohmskit.h"
#include "activity2_ohmskit.h" // Why does this not cause an error? Header guards!
int main(void) {
    // --- Ohm's law ---
    double V = v_from_ir(0.02, 220.0);
    printf("V = I*R = %.3f V\n", V);
    double R = r_from_vi(12.0, 0.01);
    printf("R = V/I = %.1f ohms\n", R);
    R = r_from_vi(5.0, 0.0);
    printf("R = V/I = %.1f ohms\n", R);
    double I = i_from_vr(5.0, 1000.0);
    printf("I = V/R = %.3f A\n", I);
    // --- Resistor combinations ---
    double R1 = 1000.0;
    double R2 = 2200.0;
    double Rs = r_series2(R1, R2);
    printf("R_series = %.1f ohms\n", Rs);
    double Rp = r_parallel2(R1, R2);
    printf("R_parallel = %.1f ohms\n", Rp);
    return 0;
}

