#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime", num);
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("Prime", num);
                return 0;
            }
        }
        printf("Prime", num);
    }

    return 0;
}
