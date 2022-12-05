#include <stdio.h>
#include <string.h>

int strlength(char str);
int strconcat(char *str_1, char *str_2);

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
        
            printf(strlength(str));
        case 2:
            printf("Enter Your first string for the second task: ");
            scanf("%s", str_1);

            printf("Enter Your second string for the second task: ");
            scanf("%s", str_2);
        
            printf(strconcat(str_1,str_2));
    }

}

int strlength(char *str)
{
    int count = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int strconcat(char *str_1, char *str_2)
{
    char *str_alt;
    int i,j;

    while (str_1[i] != '\0') 
    {
        str_alt[j] = str_1[i];
        i++;
        j++;
    }

    i = 0;
    while (str_2[i] != '\0') 
    {
        str_alt[j] = str_2[i];
        i++;
        j++;
    }
    str_alt[j] = '\0';

    printf("Concatenated string: %s", str_alt);
}
