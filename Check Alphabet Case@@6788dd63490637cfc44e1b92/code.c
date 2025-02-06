#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char  ch = "a";
    scanf("%c",&ch);
    if (isupper(ch))
    {
        printf("Uppercase")

    }
    else{
        printf("Lowercase")
    }
    return 0;
}