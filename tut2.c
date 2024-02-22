//Tutorial ---> 3


//swap using a temp var
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two nos(a b):"); scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    c=a; a=b;b=c;
    printf("\nAfter Swapping a=%d and b=%d",a,b);
    return 0;
}

//swap without using a temp
/*#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two nos(a b):"); scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    a=a+b;b=a-b;a=a-b;
    printf("\nAfter Swapping a=%d and b=%d",a,b);
    return 0;
}*/

//check wheather odd or even
/*#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the no:"); scanf("%d",&a);
    (a%2==0)?printf("%d is even",a):printf("%d is odd.",a);
    return 0;
}*/
//expression eval
/*#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the nos(a b c d e):"); scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float exp1= a+b-c+d;float exp2= a*b/c+d;float exp3=1+a*b%c;float exp4=a+d%b-c;
    printf("Exp1 = %.3f\nExp2 = %.3f\nExp3 = %.3f\nExp4 = %.f",exp1,exp2,exp3,exp4);
    return 0;
}*/