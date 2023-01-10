#include <stdio.h>

int main ()
{
    int sum=0,res=0,num;

    printf("Enter your number:");
    scanf("%d",&num);

    do
    {
        res=num%10;
        num=num/10;
        sum=sum+res;
    }while(num!=0);
    printf("Your number is:%d",sum);
}