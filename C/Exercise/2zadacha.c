#include <stdio.h>
#include <string.h>

int main(){

    char word[20];
    char element = '\n';
    char *res;

    printf("Enter a string: ");
    fgets(word,20,stdin);

    res = strchr(word,element);

    if (res != NULL)
    {
        *res = '\0';
    }
    printf("%s",word);
    return 0;
}