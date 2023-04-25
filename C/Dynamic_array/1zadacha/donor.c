#include "dynarr.h"
#include <stdio.h>
#include <string.h>

#define MAX_EGN_LEN 11

int main() {
    DynamicArray donors = init(10);

    while (1) {
        printf("Choose an option:\n");
        printf("1. Register a new donor\n");
        printf("2. Remove a donor\n");
        printf("3. Display all donors\n");
        printf("4. Exit\n");

        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            char egn[MAX_EGN_LEN+1];
            printf("Enter EGN: ");
            scanf("%s", egn);

            if (findIndex_Double(&donors, egn) != -1) {
                printf("Donor already registered.\n");
            } else {
                setel_Double(&donors, donors.size, egn);
                printf("Donor registered.\n");
            }

        } else if (choice == 2) {
            char egn[MAX_EGN_LEN+1];
            printf("Enter EGN: ");
            scanf("%s", egn);

            int index = findIndex_Double(&donors, egn);
            if (index != -1) {
                pop_Double(&donors, index);
                printf("Donor removed.\n");
            } else {
                printf("Donor not found.\n");
            }

        } else if (choice == 3) {
            printf("Donors:\n");
            for (int i = 0; i < donors.size; i++) {
                printf("%s\n", (char*)getel_Double(&donors, i));
            }

        } else if (choice == 4) {
            releasedynarr_Double(&donors);
            printf("Goodbye!\n");
            break;

        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
