#include <stdio.h>

typedef enum {
    Monday = 1, 
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday, 
    Sunday
} Day;

int main() {
    int day_number = 0;
    scanf("%d", &day_number);

    while (day_number < 1 || day_number > 7) {
        printf("!\n");
        scanf("%d", &day_number);
    }

    Day day = (Day) day_number;
    switch (day) {
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf("Saturday\n");
            break;
        case Sunday:
            printf("Sunday\n");
            break;
        default:
            break;
    }

    return 0;
}