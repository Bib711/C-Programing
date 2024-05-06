//Tutorial ----> 11

//Q1 to find the factorial of a given number using pointers
#include <stdio.h>
void fact(int num, int *result) {
    *result = 1;
    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}

int main() {
    int number,factorial;
    printf("Enter a number: ");
    scanf("%d", &number);
    fact(number, &factorial);
    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}