#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE],int rows,int columns) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element for mat[%d][%d]:",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrix(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int columns1, int columns2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

char stop(){
    char decision;
    printf("\nYou sure u wanna exit?(y/n):");
    scanf(" %c",&decision);
    return decision;   
}

int main() {
    int choice;
    char decision ='n';
    do {
        printf("\n\nMenu:\n");
        printf("1. Add matrices\n");
        printf("2. Multiply matrices\n");
        printf("3. Transpose matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                int rows1, columns1, rows2, columns2;
                int matrix1[MAX_SIZE][MAX_SIZE],matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
                printf("Enter the number of rows and columns for matrix 1: ");
                scanf("%d%d",&rows1,&columns1);
                readMatrix(matrix1, rows1, columns1);

                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d%d",&rows2,&columns2);
                readMatrix(matrix2, rows2, columns2);

                if (rows1 == rows2 && columns1 == columns2) {
                    addMatrix(matrix1, matrix2, result, rows1, columns1);
                    printf("\nresult ");
                    displayMatrix(result, rows1, columns1);
                } else {
                    printf("Matrix addition is not possible.\n");
                }
                break;
                }
            case 2:
                {
                int rows1, columns1, rows2, columns2;
                int matrix1[MAX_SIZE][MAX_SIZE],matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
                printf("Enter the number of rows and columns for matrix 1: ");
                scanf("%d%d",&rows1,&columns1);
                readMatrix(matrix1, rows1, columns1);

                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d%d",&rows2,&columns2);
                readMatrix(matrix2, rows2, columns2);

                if (columns1 == rows2) {
                    multiplyMatrix(matrix1, matrix2, result, rows1, columns1, columns2);
                    printf("\nresult ");
                    displayMatrix(result, rows1, columns2);
                } else {
                    printf("Matrix multiplication is not possible.\n");
                }
                break;
                }
            case 3:
                {
                int rows1, columns1;
                int matrix[MAX_SIZE][MAX_SIZE],result[MAX_SIZE][MAX_SIZE];
                printf("Enter the number of rows and columns for the matrix: ");
                scanf("%d%d",&rows1,&columns1);
                readMatrix(matrix, rows1, columns1);

                printf("\nOriginal matrix: \n");
                displayMatrix(matrix, rows1, columns1);

                transposeMatrix(matrix, result, rows1, columns1);
                printf("\nresult ");
                displayMatrix(result, columns1, rows1);
                break;
                }
            case 4:
                decision = stop();
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }while(decision == 'n' || decision == 'N');
    return 0;
}