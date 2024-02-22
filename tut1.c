//Tutorial ---> 2



//square of a no
#include <stdio.h>
int main (){
    int num ;
    printf("Enter a integer:"); scanf("%d",&num);
    printf("Square of %d is %d.",num ,(num*num));
    return 0;
}

//avg of 3 nos
/*#include <stdio.h>
int main (){
    float num1,num2,num3 ;
    printf("Enter three integers(a b c):"); scanf("%f%f%f",&num1,&num2,&num3);
    printf("Average of %.1f %.1f and %.1f is:%.1f",num1,num2,num3 ,(num1+num2+num3)/3);
    return 0;
}*/

//arithemetic operations on 2 nos
/*#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter two integers(a b):"); scanf("%d%d",&num1,&num2);
    printf("sum of %d + %d :%d",num1,num2,(num1+num2));
    printf("\nDifference b/w %d and %d :%d",num1,num2,(num1-num2));
    printf("\nProduct of %d and %d :%d",num1,num2,(num1*num2));
    printf("\nDivision of %d and %d :%.1f",num1,num2,(num1/num2));
    printf("\n %d %% %d :%.1f",num1,num2,(num1%num2));
    return 0;
}*/

//print personal details
/*#include <stdio.h>
int main(){
    char Name[15],Adrs[20],city[15],ph[10];
    printf("Enter your name:"); gets(Name);
    printf("Enter your Address:");  gets(Adrs);
    printf("Enter city:"); gets(city);
    printf("Enter Ph.No:"); gets(ph);
    printf("\nName:%s\nAddress:%s\nCity:%s\nPhone No:%s",Name,Adrs,city,ph);
    return 0;
}*/