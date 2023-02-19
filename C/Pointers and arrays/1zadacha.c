#include <stdio.h>

int find_the_lenght(char *arr){

    char *pointer = arr;
    int count = 0;

    while (*pointer != '\0')
    {
        pointer++;
        count++;
    }
    return count;
}

int main(){
    int result;
    char name[] = "Ivo";

    result = find_the_lenght(name);

    printf("%d", result);

    return 0;
}