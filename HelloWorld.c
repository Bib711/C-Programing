

#include <stdio.h>
int main (){
    float num1,num2,num3 ;
    printf("Enter three integers(a b c):"); scanf("%f %f %f",&num1,&num2,&num3);
    printf("Average of %.3f %.3f and %.3f is:%.3f",num1,num2,num3 ,(num1+num2+num3)/3);
    return 0;
}