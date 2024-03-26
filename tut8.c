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
#include <stdio.h>
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
}
