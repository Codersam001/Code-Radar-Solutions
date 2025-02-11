#include <stdio.h>
int main(){
    int intial,updated;
    scanf("%d%d",&intial,&updated);
    if (intial<updated){
        printf("Profit");
    }
    else if (intial>updated){
        printf("Loss");
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
}