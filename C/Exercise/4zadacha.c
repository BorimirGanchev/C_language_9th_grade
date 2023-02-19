#include <stdio.h>

int compareasc(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
        return 1;
    }
    else if (*(int *)a < *(int *)b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int comparedesc(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
        return -1;
    }
    else if (*(int *)a < *(int *)b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void bubbleSort(int *array, int n, int (*compare)(void *, void *))
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (compare(&array[j], &array[j + 1]) > 0)
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int array[10];
    int num;
    printf("Enter the number of digits that you want to enter: ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++)
    {
        printf("Enter the %d digit: ", i+1);
        scanf("%d", &array[i]);
    }
    bubbleSort(array, num, compareasc);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    bubbleSort(array, num, comparedesc);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}