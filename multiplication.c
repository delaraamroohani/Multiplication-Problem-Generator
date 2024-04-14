#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
    int number;
    do {
        srand(time(0));
        int a = rand() % 9 + 2;
        int b = rand() % 9 + 2;
        int c = a * b;
        int random2 = rand() % 2 + 1;

        if (random2 == 1) {
            int random = rand() % 2 + 1;
            if (random == 1) {
                printf("? x %d = %d\n", a, c);
                scanf("%d", &number);
                while (number != b && number != -1) {
                    printf("No! Try again.\n");
                    scanf(" %d", &number);
                }
            }
            else if (random == 2) {
                printf("? x %d = %d\n", b, c);
                scanf("%d", &number);
                while (number != a && number != -1) {                    
                    printf("No! Try again.\n");
                    scanf(" %d", &number);
                }
            }
            printf("Yes!\n");
        }

        else if (random2 == 2) {
            printf("%d x %d = ?\n", a, b);
            scanf("%d", &number);
            while (number != c && number != -1) {
                printf("No! Try again.\n");
                scanf(" %d", &number);
            }
            printf("Yes!\n");
        }
    } while (number != -1);

    return 0;
}