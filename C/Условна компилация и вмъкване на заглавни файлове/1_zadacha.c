#include <stdio.h>

#define MACRO 0

void arraySort(int *arr, int arrLenght)
{
	int tmp = 0;
    int sum=0;

	for (int i = 0; i < arrLenght - 1; i++)
	{
		for (int j = 0; j < arrLenght - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
    for(int i=1; i<arrLenght;i++)
    {
        if(i%3==0)
        sum=sum+arr[i]; 
    }
    printf("%d",sum);
}

int main ()
{
    int array[8]={3,2,4,1,5,6,7,8};

    #ifdef MACRO
    arraySort(array,8);
    #endif

    return 0;
}