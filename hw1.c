//fabinocci series
/*#include <stdio.h>
int main() {
    int limit, first=0,second=1,next=0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("%d %d ",first,second);
    for (int i=3; next<=limit ;++i ){
        next = first + second;
        if (next<=limit){
            printf("%d ",next);
        } first = second;second = next;
    }
 return 0;
}*/

//factorial pgm using for loop
/*#include <stdio.h>
int main() {
    int num, i=1,factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    for(i;i<=num;++i){
        factorial =factorial* i;
    }
    printf("%d Factorial: %d\n",num, factorial);

return 0;
}*/


#include <stdio.h>
#include <math.h>
int main() {
    int num, n=0,sum = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int org=num;
    while(org>0){
        org/=10;
        ++n;}
    org=num;
    for (int i =1;org>0;++i){
        sum += pow((org%10),n);
        org/=10;
    }
   (sum==num)? printf(" %d is Armstrong\n", num): printf(" %d is not Armstrong\n", num);

return 0;
}