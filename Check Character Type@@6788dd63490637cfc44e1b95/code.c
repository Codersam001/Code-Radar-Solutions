#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char ch;
   scanf("%s",&ch);
   if ( ch=='A'||ch=='a'||ch=='i'||ch=='I'|| ch=='o' || ch=='O' || ch=='E'|| ch=='e'||ch=='u'|| ch=='U'){
    printf("Vowel");
   }
   else if (ch>='A' && ch<='Z') || (ch>='a' && ch<='z'){
    printf("Consonant");
   }
   else if (ch>='1' && ch<='9'){
    printf("Digits");
   }
   else {
    printf("Special Charater");
   }
    return 0;
}