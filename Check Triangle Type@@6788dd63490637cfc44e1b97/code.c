#include <stdio.h>
int main(){
    int side1,side2,side3;
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1=side2=side3){
        printf("Equilateral");
    }
    else if (a==b || b==c || a==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
     return 0;
}