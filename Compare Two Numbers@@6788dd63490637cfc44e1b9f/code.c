#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("Second",b);
    }
    else if(a>b){
        printf("First",a);
    
    }
    else{
        printf("Equal");
    }
}