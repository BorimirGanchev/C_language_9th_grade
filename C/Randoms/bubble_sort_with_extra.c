#include <stdio.h>

int main ()
{
    int mass[6]={1, 7, 3, 4, 9, 2};
    int tmp=0,sum=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(mass[j]>mass[j+1])
            {
                tmp=mass[j];
                mass[j]=mass[j+1];
                mass[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        sum=sum+mass[i]*i;
    }
    printf("The sum is:%d",sum);
}