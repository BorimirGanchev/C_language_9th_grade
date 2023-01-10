#include <stdio.h>
#include <string.h>

void string(char str[]);
int main()
{
    char str[20];

    printf("Enter a name:");
    scanf("%s",&str);

    string(str);

    return 0;
}

void string(char str[])
{
    char res;
    int n=0,i=0;

    n=strlen(str);
    
    res=str[0];

    for(int i=0;i<n;i++)
    {
        if(res<str[i])
        {
            res=str[i];
            
        }
    }
    printf("%c",res);
}