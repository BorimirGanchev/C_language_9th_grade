#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *read_string() {
    char *str = (char *)malloc(15 + 1); 
    fgets(str, 15 + 1, stdin); 
    str[strcspn(str, "\n")] = 0; // remove newline
    return str;
}

int main (){

    int number_subejcts;
    int number_students = 0;
    int option;
    char ** arr_students = NULL;
    int ** arr_grades = NULL;
    char *arr_subjects[10];

    printf("Enter number of subjects: ");
    scanf("%d", &number_subejcts);
    getchar(); 

    
    for (int i = 0; i < number_subejcts; i++) {
        printf("Enter name of subject %d: ", i + 1);
        arr_subjects[i] = read_string();
    }

//-----------------------------------------------------------------------

    do{

        printf("Enter an option: \n1 - Enter a new student. \n2 - Print the diary. \n3 - Exit the program. \nEnter:");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:

            printf("Enter name of student: ");
            char *name = read_string();

            number_students++;
            arr_students = (char **)realloc(arr_students, number_students * sizeof(char *));
            arr_students[number_students - 1] = name;

            
            arr_grades = (int **)realloc(arr_grades, number_students * sizeof(int *));
            arr_grades[number_students - 1] = (int *)malloc(number_subejcts * sizeof(int));
            printf("Enter grades for student %s:\n", name);
            for (int i = 0; i < number_subejcts; i++) {
                printf("%15s: ", arr_subjects[i]);
                scanf("%d", &arr_grades[number_students - 1][i]);
                getchar();
            }
            break;
        
        case 2:
            printf("%15s", "");
            for (int i = 0; i < number_subejcts; i++) {
                printf("%15s |", arr_subjects[i]);
            }
            printf("\n");

            
            for (int i = 0; i < number_students; i++) {
                printf("%15s|", arr_students[i]);
                for (int j = 0; j < number_subejcts; j++) {
                    printf("%15d|", arr_grades[i][j]);
                }
                printf("\n");
            }

            break;

        case 3:

            for (int i = 0; i < number_subejcts; i++) {
                free(arr_subjects[i]);
            }
            for (int i = 0; i < number_students; i++) {
                free(arr_students[i]);
                free(arr_grades[i]);
            }
            free(arr_students);
            free(arr_grades);

            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid option. Please try again.\n");
            break;
        }

    }while(option != 3);

    return 0;
}