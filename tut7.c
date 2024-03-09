//Tutorial ---> 7

//Q1 Countdown
/*#include <stdio.h>
int main(){
    int num = 10;
    while (num >= 1){
        printf("%d\n", num);
        --num;
    }
    return 0;
}*/

//Q2 Sum of Natural nos
/*#include <stdio.h>
int main(){
    int num ,i=1,sum=0;
    printf("Enter the end no:");scanf("%d",&num);
    while (i<=num){
        sum += i;
        ++i;
    }
    printf("Sum of first %d natural nos is %d.",num,sum);
    return 0;
}*/


//Q3 Factorial
/*#include <stdio.h>
int main(){
    int num,i=1,factorial=1;
    printf("Enter a no:");scanf("%d",&num);
    while (i<=num){       
        factorial *= i;
        ++i;      
    }
    printf("%d! = %d.",num,factorial);
    return 0;
}*/

//Q4 Even Nos in a range
/*#include <stdio.h>
int main(){
    int i=1,j=20;
    printf("\nEven nos in range of 1-20 are:\n");
    while (i<j){       
        if (i%2==0)printf("%d ",i);
        ++i;      
    }
    return 0;
}*/


//Q5 Multiplication table
/*#include <stdio.h>
int main(){
    int i=1,num;
    printf("\nEnter no:");scanf("%d",&num);
    while (i<=10){       
        printf("%d * %d = %d\n",num,i,(num*i));
        ++i;      
    }
    return 0;
}*/

//Q6 Reverse the no
#include <stdio.h>
int main(){
    int num,reverse=0;
    printf("Enter a no:");scanf("%d",&num);
    printf("\nNo before reversing= %d",num);
    while (num>0){       
        int i = num%10;
        reverse = reverse*10 + i;
        num /=10;      
    }
    printf("\nNo after reversing= %d",reverse);
    return 0;
}