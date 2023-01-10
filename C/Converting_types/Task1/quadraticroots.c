#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(long double a, long double b, long double c)
{
    struct QuadraticRootsResult result;
    int discrimination = 0;
    discrimination = (b * b) -4 * a * b;

    if(discrimination > 0)
    {
        result.x1 = (-b + sqrtl(discrimination)) / 2 * a;
        result.x2 = (-b - sqrtl(discrimination)) / 2 * a;
        result.norealroots=0;
    }
    else if (discrimination = 0)
    {
        result.x1 = result.x2 = (-b) / 2 * a;
        result.norealroots=0;
    }
    else
    {
        result.norealroots=1;
    }
    return result;
}