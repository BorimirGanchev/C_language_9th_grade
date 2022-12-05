#include <stdio.h>

#define MACRO(NAME, NUMBER) printf(#NAME " " NUMBER " %s %d ",NAME,__FILE__,__LINE__)

int main (void){
    int var = 4;
    MACRO(var, "%d");
}