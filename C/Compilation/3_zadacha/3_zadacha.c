#include <stdio.h>
#include "transformation.h"
#include <string.h> 

void main(){
    transformation a;
    a = transformString("12a7", 3);
    if(strcmp(a.error, "\0") == 0){
        printf("%ld", a.result);
    }else{
        printf("%s", a.error);
    }
}