#include <stdio.h>

#define MACRO(A,B)\
        (A + B)*(A + B)

int main ()
{
    int a=4;
    int b=3;
    printf("%d",MACRO(a,b));
    return 0;
}