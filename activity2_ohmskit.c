#include "activity2_ohmskit.h"

double v_from_ir(double I, double R)
{
    return I * R;
}

double r_from_vi(double V, double I)
{
    if(I == 0.0)
    {
        return 0.0; // avoid division by zero
    }
    return V / I;
}

double i_from_vr(double V, double R)
{
    if(R == 0.0)
    {
        return 0.0;
    }
    return V / R;
}

double r_series2(double R1, double R2)
{
    return R1 + R2;
}

double r_parallel2(double R1, double R2)
{
    return (R1 * R2) / (R1 + R2);
}


// --- Combinations ---
// Add the missing series and parallel functions here.
