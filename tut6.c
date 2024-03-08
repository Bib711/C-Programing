//Tutorial ---> 5

//Q1 to check wheather the entered char is a vowel or not
#include <stdio.h>
int main(){
    char vowel;
    printf("Enter a character: ");scanf("%c",&vowel);
    switch (vowel){
        case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("\nVowel.");break;
        default :printf("\nConsonant.");
    }
    return 0;
}

//Q2 display no of days in a month
