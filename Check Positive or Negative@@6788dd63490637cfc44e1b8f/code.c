#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("Positive",a);
    }
    else if(a<0) {
        printf("Negative",a);
    }
    else{
        printf("Zero",a);
    }
    return 0;
}