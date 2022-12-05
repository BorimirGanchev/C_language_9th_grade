#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int strl(char *str)
{
    int count = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char strconcat(char *str_1, char *str_2)
{
    int i,j;
    for(i=0; str_1[i]!='\0'; ++i); 

    for(j=0; str_2[j]!='\0'; ++j, ++i)
    {
    str_1[i]=str_2[j];
    }

    str_1[i]='\0';

    printf("Concatenated string: %s", str_1);
}

int strcompare(char *str_3, char *str_4)
{
    for(int i=0; str_3[i]!='\0' && str_4[i]!='\0'; i++)
    {
        if(str_3[i] > str_4[i])
            return -1;

        if (str_3[i] < str_4[i])
            return 1;
    }
    return 0;
}

void main (void)
{
    int task;
    char str[10],str_1[10],str_2[10],str_3[10],str_4[10];

    printf("Enter the number of the task that you want to see:");
    scanf("%d",&task);

    switch (task)
    {
        case 1:
            printf("Enter Your string for the first task: ");
            scanf("%s", str);
        
            printf("%d", strl(str));
            break;
        case 2:
            printf("Enter Your first string for the second task: ");
            scanf("%s", str_1);

            printf("Enter Your second string for the second task: ");
            scanf("%s", str_2);
        
            printf("%s", strconcat(str_1,str_2));
            break;
        case 3:
            printf("Enter your first string for the third task: ");
            scanf("%s", str_3);

            printf("Enter your second string for the third task: ");
            scanf("%s", str_4);
        
            printf("%d", strcompare(str_3,str_4));
            break;
    }

}