#include <stdio.h>

#define LINUX 0

void printosinfo(){
    printf("Info about os:\n");

    #ifdef LINUX
    printf("You are ynder Linux\n");
    #endif

    #ifndef WINDOWS
    printf("You are under Linux");
    #endif
}

int main(){
    printosinfo();

    return 0;
}