#include <stdio.h>

int main() {
    int a,b,c;
    float res;
    scanf("%d%d%d",&a,&b,&c);
    res=(a+b+c/3);
    printf("Average: %.2f",res);
    return 0;
}