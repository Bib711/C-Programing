#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int *ptr;
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    ptr = arr; 
    for (i = 0; i < size; i++) {
        scanf("%d", ptr + i); 
    }

    printf("Elements of the array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

