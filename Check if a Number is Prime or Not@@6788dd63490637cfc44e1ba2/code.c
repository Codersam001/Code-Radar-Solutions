#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime", num);
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("Prime", num);
                return 0; // Exit the program early if not prime
            }
        }
        printf(" Prime", num);
    }

    return 0;
}
