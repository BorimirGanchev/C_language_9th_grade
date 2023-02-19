#include <stdio.h>
int compareasc(void *point, void *pointer1){

    if (*(int *) point > *(int*) pointer1)
        return 1;
    else if (*(int *)point == *(int *)pointer1)
        return 0;
    else
        return -1;
}

int comparedesc(void *point, void *pointer1){

    if (*(int *) point > *(int*) pointer1)
        return -1;
    else if (*(int *)point < *(int *)pointer1)
        return 1;
    else
        return 0;
}

int main (){

    int var = 4;
    int var1 =5;

    int *point_to_var = &var;
    int *point_to_var1 = &var1;

    int res;
    int res1;

    res = compareasc(point_to_var,point_to_var1);
    printf("%d\n",res);

    res1 = comparedesc(point_to_var,point_to_var1);
    printf("%d",res1);
    
    return 0;
}