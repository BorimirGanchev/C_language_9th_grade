#include "transformation.h"
#include <string.h>

transformation transformString(char* str, int size){
    transformation a;
    a.result = 0;
    strcpy(a.error, "\0");
    for(int i = 0; i < size; i++){
        if(str[i] == '\0'){
            break;
        }
        if(str[i] >= '0' && str[i] <= '9'){
            a.result = a.result*10 + str[i] - '0';
        }else{
            a.result = 0;
            strcpy(a.error, "Invalid Input string");
            break;
        }
    }
    return a;
}