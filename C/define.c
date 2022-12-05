#include <stdio.h>

#define LINUX 1
#define VERSION 1
#define BUFFER_SIZE 2048

void printosinfo(){
    printf("Info about os:\n");

    #if defined LINUX 
    printf("You are ynder Linux\n");
    #endif

    #if defined _SIZE_T_DEFINED
    #endif

    #if defined WINDOWS
    printf("You are under Windows");
    #endif
}

int main(){
    printosinfo();

    return 0;
}