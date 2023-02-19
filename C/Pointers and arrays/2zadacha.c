#include <stdio.h>

void swap(int *var, int *var1){
    int tmp = *var;
    *var = *var1;
    *var1 = tmp;
}
 
void sortArray(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
	    for (int j = i + 1; j < size; j++) {
	        if (*(arr + i) > *(arr + j)) {
	            swap((arr + i), (arr + j));
	        }
	    }
	}
}

int main(){
    int arr[] = { 9, 5, 7, 1, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    printf("\nAfter sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}