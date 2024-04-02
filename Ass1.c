//C Programming assignment

//Q1 to print the series 100,95,90...,5
/*Pseudo code 
1. Start
2. Set a variable 'num’ to 100
3. While 'num' is greater than or equal to 5:
     a Print the value of 'num'
     b also decrease the value of num by 5, num-=5
4. End*/

//Program
/*#include <stdio.h>
int main() {
    for(int i =100; i>0;i-=5){
    printf("%d,",i);
    }
    return 0;
}*/


//Q2 a)to print the upper triangle pattern using star
/*#include <stdio.h>
int main() {
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int srow = 1+(rows-1)*2;
    for (int i = 1,k=1; k <= rows; i+=2,++k) {
        //to print spaces
        for (spaces = i; spaces <= srow; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}*/


//Q2 b)to print the lower triangle pattern using star
/*#include <stdio.h>
int main() {
    int rows, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int srow = 1+(rows-1)*2;
    for (int i=srow,k = rows; k > 0;i-=2,k--) {
        //to print spaces
        for (spaces = i; spaces < srow; spaces++)
            printf(" ");
            //to print the pattern
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
return 0;
}*/



//Q3 i/p = 3 o/p = 2+22+222
/*#include <stdio.h>
int main() {
    int n,sum1=0,sum2=0, temp = 2;
    printf("Enter the no of terms:");scanf("%d",&n);
    for(int i =1; i<=n;++i){
    sum1 = sum1*10+temp;
    printf("%d+",sum1);
    sum2 += sum1;
    }
    printf("=%d",sum2);
    return 0;
}*/

//Q4 to print the gross salary of the employee
#include <stdio.h>
int main() {
    float bsalary,hra,da,gsalary;
    printf("Enter the basic salary:");scanf("%f",&bsalary);
    if (bsalary >= 1 && bsalary <= 4000) {
        hra = 0.1 * bsalary;
        da = 0.5 * bsalary;
    } else if (bsalary >= 4001 && bsalary <= 8000) {
        hra = 0.2 * bsalary;
        da = 0.6 * bsalary;
    } else if (bsalary >= 8001 && bsalary <= 12000) {
        hra = 0.25 * bsalary;
        da = 0.7 * bsalary;
    } else if (bsalary > 12000) {
        hra = 0.3 * bsalary;
        da = 0.8 * bsalary;
    }

    gsalary = bsalary+hra+da;
    printf("Gross salary is :%.2f",gsalary);
return 0;
}