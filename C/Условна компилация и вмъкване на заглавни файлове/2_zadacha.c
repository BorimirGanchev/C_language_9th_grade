#include <stdio.h>

#define ARRAY_SIZE 4

double square(double x) {
  return x * 2;
}

int main ()
{
    #if defined ARRAY_SIZE 
        #if ARRAY_SIZE > 0 && ARRAY_SIZE < 10
            double array[ARRAY_SIZE]={};
            array[0]=1;
            for(int i=0; i<ARRAY_SIZE; i++)
            {
                if(i==0)
                {
                    array[i]=square(array[i]);
                }
                else
                {
                    array[i]=square(array[i-1]);
                }
            }
        #endif
    #endif

    for(int i=0; i<ARRAY_SIZE; i++){
        printf("%lf \n",array[i]);
    }
}