#include<stdio.h>
#include "maths.h"

int factor(int n){

    int fact=1;

    for(int i = 1;i<=n;i++)
        fact=fact*i; 

    return fact;
}