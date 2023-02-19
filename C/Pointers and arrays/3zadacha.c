#include <stdio.h>
#include <string.h>

void strhalf(char *str, char **pointer) {
    int len = strlen(str);
    *pointer = str + len/2;
}

int main() {
    char str[] = "Mitko";
    char *ptr = NULL;
    strhalf(str, &ptr);
    printf("%s", ptr); 
    return 0;
}