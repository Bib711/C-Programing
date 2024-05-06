//Tutorial ----> 11

//Q1 to find the factorial of a given number using pointers
/*#include <stdio.h>
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
}*/

//Q2Write a program in C to sort an array using a pointer.

#include <stdio.h>

void sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}