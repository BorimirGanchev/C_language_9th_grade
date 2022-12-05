/*#include <stdio.h>

#define SORT(ARRAY, SIZE, TYPE, COMPARE)\
    for(int i=0;i<SIZE;i++){\
        for(int j=0;j<SIZE-i-1;j++){\
            if(ARRAY[j] COMPARE ARRAY[j+1]){\
                int tmp=ARRAY[j];\
                ARRAY[j]=ARRAY[j+1];\
                ARRAY[j+1]=tmp;}}}

int main(){
    int array[5]={3,4,2,1,5};
    SORT(array, 5, int, >);
    for(int i=0;i<5;i++){
        printf("%d",array[i]);
    }
}*/

#include <stdio.h>

#define SWAP(A,B,TYPE)\
            TYPE C=A;\
            A=B;\
            B=C;

#define SORT(ARRAY, SIZE, TYPE, COMPARE)\
    for(int i=0;i<SIZE;i++){\
        for(int j=0;j<SIZE-i-1;j++){\
            if(ARRAY[j] COMPARE ARRAY[j+1]){\
				SWAP(array[j], array[j + 1],int);}}}

int main(){
    int array[5]={3,4,2,1,5};
    SORT(array, 5, int, >);
    for(int i=0;i<5;i++){
        printf("%d",array[i]);
    }
}
