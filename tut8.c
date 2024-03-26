//Tutorial ---> 8


//Q1 -->Floyd's triangle
/*#include <stdio.h>
int main() {
    int rows ,n =1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ",n++);
        }
        printf("\n\n");
    }
return 0;
}*/

//Q2--> create a pattern 
/*#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Pattern: \n");
    for (int i = rows; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
return 0;
}*/

//Q3 --> print prime nos in a given range
/*#include <stdio.h>
int main() {
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    for (int i = 2; i <= range; i++) {
        int flag = 0;
        for (int j = 2; j <= i/2; j++) {
            if (i%j==0){
                flag =1;break;
            }
        }
        if (flag==0)printf("%d ",i);
    }
return 0;
}*/

//Q4 --> another diamond pattern
#include <stdio.h>
int main() {
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = i; spaces < rows; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = rows; i >= 0; i--) {
        for (spaces = i; spaces < rows; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}