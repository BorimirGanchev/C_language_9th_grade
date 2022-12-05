#include <stdio.h>

#define SWAP(A,B,TYPE){\
            TYPE C=A;\
            A=B;\
            B=C;\
            } 

int main(void){
    int a=10,b=20;
    printf("This is a - %d and this is b - %d \n", a,b);
    SWAP(a,b,int);
    printf("AFTER: This is a - %d and this b - %d", a,b);

    char c='c', d='d';
    SWAP(c,d,char);
    printf("AFTER: This is a - %c and this b - %c", c,d);

    return 0;
}