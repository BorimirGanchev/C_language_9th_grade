#ifndef QUADRATIC
#define QUADRATIC

struct QuadraticRootsResult
{
    long double x1;
    long double x2;
    long double norealroots;
};

struct QuadraticRootsResult findroots(long double a, long double b, long double c);

#endif