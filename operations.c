
#include <stdio.h>

int main()
{   int num1;
    printf("ENTER THE NUMBER:\n");
    scanf("%f",&num1);

    if(num1<0){
        printf("THIS IS A NEGATIVE NUMBER");
    }
    else{
        printf("THIS IS A POSITIVE NUMBER");
    }
    return 0;
}