#include <stdio.h>

int main() {
    unsigned char rooms = 0;
    int ope;

    while (1) {
        do {
            printf("Enter:");
            scanf("%d", &ope);
            printf("\n");
        } while (ope < 1 || ope > 3);
        if (ope == 1) {
            int root;
            do {
                printf("Select a room: ");
                scanf("%d", &root);
                printf("\n");
            } while (root < 1 || root > 8);
            rooms ^= (1 << root - 1);
        } else if (ope == 2) {
            int flag = 1;
            printf("On:");
            for (int i = 0; rooms >> i > 0; i++) {
                if ((rooms >> i) & 1) {
                    printf(" %d", i + 1);
                    if (flag)
                        flag = 0;
                }
            }
            if (flag)
                printf("\nOff.");
            printf("\n\n");
        } else if (ope == 3)
            break;
    }
    return 0;
}