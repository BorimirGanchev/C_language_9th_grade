#include <stdio.h>

#define ARRAY_SIZE 5
#define NUMBER 1,2,\
               3,4,\
               5

int main (){
    int array[ARRAY_SIZE] = {NUMBER};

    for(int i = 0; i < ARRAY_SIZE;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}