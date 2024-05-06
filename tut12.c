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
/*
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
}*/

//Q3 Program to Implement Matrix Multiplication using Pointers
#include <stdio.h>

void multiply(int *a, int *b, int *result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(result + i*c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(result + i*c2 + j) += *(a + i*c1 + k) * *(b + k*c2 + j);
            }
        }
    }
}

void printMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(mat + i*cols + j));
        }
        printf("\n");
    }
}

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int result[2][2] = {0};
    int r1 = 2, c1 = 3, c2 = 2;

    printf("First matrix is \n");
    printMatrix((int *)a, r1, c1);

    printf("Second matrix is \n");
    printMatrix((int *)b, c1, c2);

    multiply((int *)a, (int *)b, (int *)result, r1, c1, c2);

    printf("Result matrix is \n");
    printMatrix((int *)result, r1, c2);

    return 0;
}