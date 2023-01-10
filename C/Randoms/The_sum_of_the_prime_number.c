#include<stdio.h>

int main(){
    int mass[8]={1,7,10,15,16,13,23,30};
    int sum = 0;
    int count=0;

    for(int i=0;i<8;i++)
    {
        count=0;
       for(int j=1;mass[i]>=j;j++){
        if(mass[i]%j==0)
        {
            count++;
            printf("%d",count);
        }
       if(mass[i]==j)
            sum=mass[i]+sum;
        }
    }
    printf("The sum is %d",sum);
return 0;
}