#include <stdio.h>

#define MACRO 5

int main()
{
    int arr[MACRO]={1,2,3,4,5};

    for(int i=0;i < MACRO; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}