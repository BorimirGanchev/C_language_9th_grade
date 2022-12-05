#include <stdio.h>
#include "mystrings.h"

void main(int argc, char **argv){
    char string1[101] = "";
    strconcat(string1, argv[1]);
    strconcat(string1, argv[2]);
    if(strl(argv[1]) > 49 || strl(argv[2]) > 49){
        printf("Too long, change it!!!");
    }
    if(argc == 3){
        printf("concat is %s\n", string1);
    }
}
