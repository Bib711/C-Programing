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


//Q2 Sum of Natural nos
#include <stdio.h>
int main(){
    int num,i=1,factorial=1;
    printf("Enter a no:");scanf("%d",&num);
    while (i<=num){       
        factorial *= i;
        ++i;      
    }
    printf("%d! = %d.",num,factorial);
    return 0;
}