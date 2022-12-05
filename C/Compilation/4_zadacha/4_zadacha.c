#include <stdio.h>
#include <math.h>

int main (void)
{
    long array[10];
    int length;

    
    printf("Enter the lenght of the array: ");
    scanf("%d",&length);



    for(int i=0;i<length;i++){
        printf("Enter your %d digit: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i = 0; i<length;i++){
        array[i] = pow(array[i],4);
    }
    for(int i = 0; i<length;i++){
        printf("%d \n",array[i]);
    }
    return 0;
}