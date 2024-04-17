//Tutorial ----> 10

//to print no of words in a string
/*#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            count++;
        }
    }
    printf("Total number of words in the string: %d\n", count + 1);
    return 0;
}*/

//to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
 
 int main(){
    char str[100];
    int totalAlphabets = 0, totalDigits = 0, totalSpecialChars = 0,i;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            totalAlphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            totalDigits++;
        } else {
            totalSpecialChars++;
        }
    }

    printf("Total number of alphabets: %d\n", totalAlphabets);
    printf("Total number of digits: %d\n", totalDigits);
    printf("Total number of special characters: %d\n", totalSpecialChars);

    return 0;
}