#include <stdio.h>

#define ROWS 50 
#define COLUMS 4 

void printTable(int table[][COLUMS], int num_rows) {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < COLUMS; j++) {
            printf("%d ", *(*(table + i) + j));
        }
        printf("\n");
    }
}

int main() {

    int table[ROWS][COLUMS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int num_rows = 3;

    printTable(table, num_rows);

    return 0;
}