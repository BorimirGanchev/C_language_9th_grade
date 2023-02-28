#include <stdio.h>
#include <stdlib.h>

double calculate_average(double* arr, int num_grades) {
    double average = 0;
    for (int i = 0; i < num_grades; i++) {
        average += arr[i];
    }
    return average / num_grades;
}

int main () {
    int num_grades;
    int option = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &num_grades);

    if (num_grades < 0) {
        printf("Error: Number of grades cannot be negative.\n");
        exit(1);
    }

    double* arr = (double*) malloc(num_grades * sizeof(double));

    if (arr == NULL) {
        printf("Error: Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < num_grades; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    do {
        printf("\nEnter an option:\n");
        printf("1. Calculate average grade.\n");
        printf("2. Add a new grade.\n");
        printf("3. Remove the last grade.\n");
        printf("4. Exit program.\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (num_grades > 0) {
                    double average = calculate_average(arr, num_grades);
                    printf("Average grade: %.2f\n", average);
                } else {
                    printf("No grades available.\n");
                }
                break;

            case 2:
                num_grades++;
                arr = (double*) realloc(arr, num_grades * sizeof(double));
                if (arr == NULL) {
                    printf("Error: Memory allocation failed.\n");
                    exit(1);
                }
                printf("Enter the new grade: ");
                scanf("%lf", &arr[num_grades - 1]);
                printf("Grade added.\n");
                break;

            case 3:
                if (num_grades == 0) {
                    printf("No grades available.\n");
                } else {
                    num_grades--;
                    arr = (double*) realloc(arr, num_grades * sizeof(double));
                    if (arr == NULL) {
                        printf("Error: Memory allocation failed.\n");
                        exit(1);
                    }
                    printf("Last grade removed.\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    } while (option != 4);

    free(arr);

    return 0;
}
