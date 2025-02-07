#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char ch;
   scanf("%c",&ch);
   if ( ch=='A'||ch=='a'||ch=='i'||ch=='I'|| ch=='o' || ch=='O' || ch=='E'|| ch=='e'||ch=='u'|| ch=='U'){
    printf("Vowel");
   }
   else if (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'){
    printf("Consonant");
   }
   else if (ch>='0' && ch<='9'){
    printf("Digit");
   }
   else {
    printf("Special Charater");
   }
    return 0;
}