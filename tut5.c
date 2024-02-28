//Tutorial ---> 4

// Q1 eligible to vote or not?
#include <stdio.h>
int main (){
    int age;
    printf("Enter your Age: "); scanf("%d", &age);
    if (age >=18)
        printf("\n: Congratulations! You are eligible to cast your vote.");
    else
        printf("\nSorry, you are not eligible to vote yet.");        
    return 0;    
}
 