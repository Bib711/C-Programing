#include <stdio.h>

#define MAX_SIZE 100

int sumArray(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int arraySum = sumArray(arr, size);

    printf("Sum of the elements in the array: %d\n", arraySum);

    return 0;
}

