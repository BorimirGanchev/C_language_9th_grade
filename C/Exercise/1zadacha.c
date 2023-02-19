#include <stdio.h>

int main (){

    int var,var1;
    int * pvar = &var;
    int * pvar1 = &var1;

    printf("Enter a value: \n");
    scanf("%d", &var);

    printf("Enter a second value: \n");
    scanf("%d", &var1);

    printf("pvar = %p\n", pvar);
    printf("pvar1 = %p\n", pvar1);

    printf("pvar = %d\n", *pvar);
    printf("pvar1 = %d\n", *pvar1);

    return 0;
}