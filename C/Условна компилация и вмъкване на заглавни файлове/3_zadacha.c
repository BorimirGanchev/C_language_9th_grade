#include <stdio.h>

#define ARRAY_SIZE 9

int main ()
{
    int array[ARRAY_SIZE] = {5,3,6,2,1,7,8,4,9};
    #if ARRAY_SIZE > 0 && ARRAY_SIZE < 11

        #if defined WINDOWS 

            for (int i = 0 ; i < ARRAY_SIZE - 1; i++)
            {
                for (int j = 0 ; j < ARRAY_SIZE - i - 1; j++)
                {
                    if (array[j] > array[j+1]) 
                    {
                        int swap = array[j];
                        array[j] = array[j+1];
                        array[j+1] = swap;
                    }
                }
            }
        #elif defined LINUX 
            for (int i = 0; i < (ARRAY_SIZE - 1); i++)
            {
                int position = i;

                for (int j = i + 1; j < ARRAY_SIZE; j++)
                {
                    if (array[position] > array[j])
                        position = j;
                }

                if (position != i)
                {
                    int tmp = array[i];
                    array[i] = array[position];
                    array[position] = tmp;
                }
            }
        #elif defined MACOS 
            int flag = 0, j;
            for (int i = 1 ; i <= ARRAY_SIZE - 1; i++) 
            {
                int tmp = array[i];

                for (j = i - 1 ; j >= 0; j--) 
                {
                    if (array[j] > tmp) {
                        array[j+1] = array[j];
                        flag = 1;
                    }
                    else
                        break;
                }

                if (flag)
                array[j+1] = tmp;
            }
        #else
            for(int i=0; i< ARRAY_SIZE; i++)
            {
                
                for(int i=0; i <= ARRAY_SIZE/2; i++)
                {
                        if(i==0)
                    {
                        int swap = array[i];
                        array[i] = array[ARRAY_SIZE-1];
                        array[ARRAY_SIZE-1] = swap;
                    }
                    else
                    {
                        int swap = array[i];
                        array[i] = array[ARRAY_SIZE-i-1];
                        array[ARRAY_SIZE-i-1] = swap;
                    }
                }
            }
        #endif

        for (int i = 0; i < ARRAY_SIZE; i++)
            printf("%d\n", array[i]);

    #else
        printf("There is a mistake. You need to rewrite the lenght of the macro.");
    #endif
    
    return 1;
}