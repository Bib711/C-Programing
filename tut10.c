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
/*#include <stdio.h>
 
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
}*/

//to find the maximum number of characters in a string
/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int max_chars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the maximum number of characters
    max_chars = strlen(str);
    //here -1 is to exclude \n
    printf("The maximum number of characters in the string is: %d\n", max_chars-1);

    return 0;
}*/


//to find the number of times a given word 'the' appears in the given string.
/*#include <stdio.h>

int main() {
    char str[100];
    char word[4] = "the";
    int count = 0, i, j, flag;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        flag = 1;
        for (j = 0; word[j] != '\0'; j++) {
            if (str[i + j] != word[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && (str[i + j] == ' ' || str[i + j] == '\0')) {
            count++;
        }
    }

    printf("The word 'the' appears %d times in the given string.\n", count);

    return 0;
}*/

//to find the frequency of characters.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
        }
    }

    printf("Character frequencies:\n");
    for (int j = 0; j < 26; j++) {
        if (freq[j] > 0) {
            printf("%c: %d\n", 'a' + j, freq[j]);
        }
    }

    return 0;
}
