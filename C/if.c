#include <stdio.h>

#define WINDOWS 1
#define LINUX 0

void printosinfo(){
    printf("Info about os:\n");

    #if LINUX == 1 
    printf("You are ynder Linux\n");
    #endif

    #if WINDOWS == 1
    printf("You are under Windows");
    #endif
}

int main(){
    printosinfo();

    return 0;
}