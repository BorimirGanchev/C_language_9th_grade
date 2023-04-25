#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 15

typedef struct student {
    char name[MAX_NAME_LEN + 1];
    int class_num;
    double averag;
} Student;

int main() {
    int choice = 0;
    int num_students = 0;
    Student* students = NULL;

    while (choice != 3) {
        printf("Menu:\n");
        printf("1. Add Student\n");
        printf("2. List All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                num_students++;
                students = (Student*) realloc(students, num_students * sizeof(Student));
                printf("Enter name: ");
                scanf("%s", students[num_students-1].name);
                printf("Enter class number: ");
                scanf("%d", &students[num_students-1].class_num);
                printf("Enter GPA: ");
                scanf("%lf", &students[num_students-1].averag);
                break;
            case 2:
                printf("All Students:\n");
                for (int i = 0; i < num_students; i++) {
                    printf("Name: %s\n", students[i].name);
                    printf("Class Number: %d\n", students[i].class_num);
                    printf("GPA: %.2f\n", students[i].averag);
                }
                break;
            case 3:
                free(students);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}
