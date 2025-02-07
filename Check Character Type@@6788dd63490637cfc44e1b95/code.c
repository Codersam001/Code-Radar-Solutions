#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char ch;
   scanf("%s",&ch);
   if ( ch=="A"||ch=="E"||ch="I"||ch=="O"|| ch=="U"){
    printf("Vowel");
   }
   else if (ch>=a || ch<=z){
    printf("Consonant");
   }
   else if (ch>=1 || ch<=0){
    printf("Digits");
   }
   else {
    printf("Special Charater");
   }
    return 0;
}