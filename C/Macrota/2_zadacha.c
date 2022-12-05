#include <stdio.h>

#define MACRO(A, B) A > B ? A : B 

void main()
{
    int a = 5;
    int b = 2;

    printf("%d", MACRO(a, b));
}