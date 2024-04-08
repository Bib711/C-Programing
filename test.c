//pgm to add an element to the array 
/*#include <stdio.h>
int main() {
    int num,pos,n;
    printf("Enter no of elements:");scanf("%d",&n);
    int myArray[n+1];printf("Enter the elements:");
    for (int i =0;i<n;++i){
        scanf("%d",&myArray[i]);
    }
    printf("Original array :");
    int siz = sizeof(myArray)/sizeof(myArray[0]);
    for (int i =0;i<siz;++i){
        printf("%d, ",myArray[i]);
    }
    printf("\nEnter the index and the new element to be inserted(a e):");scanf("%d%d",&pos,&num);
    for(int j=n+1 ; j > pos ;j--){
        myArray[j] = myArray[j-1];
    }
    myArray[pos]=num;
    printf("Updated array :");
    for (int i =0;i<siz;++i){
        printf("%d, ",myArray[i]);
    }
    return 0;
}*/


//matrix multiplication in c
#include <stdio.h>
int main() {
    int row1,column1,row2,column2;
    printf("Enter rows and columnns for matrix 1:");scanf("%d%d",&row1,&column1);
    printf("Enter rows and columnns for matrix 2:");scanf("%d%d",&row2,&column2);
    if (column1!=row2)
        return 1;
    else{
        
        //creating and inserting values in matrix 1
        int myArray1[row1][column1];printf("\nEnter the elements for matrix 1:\n");
        for (int i =0;i<row1;++i){
          for (int j =0;j<column1;++j){
                printf("\nEnter the element for position array[%d][%d]:",i,j);
                scanf("%d",&myArray1[i][j]);
            }
        }
    
        //printing the first matrix
        printf("\nFirst array :\n");
        for (int i =0;i<row1;++i){
            for(int j=0;j<column1;++j){
                printf("%d ",myArray1[i][j]); 
            }
            printf("\n");
        }

        //creating and inserting values in matrix 2
        int myArray2[row2][column2];printf("\n\nEnter the elements for matrix 2:\n");
        for (int i =0;i<row2;++i){
            for (int j =0;j<column2;++j){
                printf("\nEnter the element for position array[%d][%d]:",i,j);
                scanf("%d",&myArray2[i][j]);
            }
        }

        //printing the second matrix
        printf("\nsecond array :\n");
        for (int i =0;i<row2;++i){
            for(int j=0;j<column2;++j){
                printf("%d ",myArray2[i][j]); 
            }
            printf("\n");
        }
        
        int newArray[row1][column2];//declaration of the new matrix for multiplication

        //multiplication of the two matrices
        for (int i =0;i<row1;++i){
            for (int j =0;j<column2;++j){
                    newArray[i][j]=0;
                for (int k =0;k<column1;++k){
                    newArray[i][j]+= myArray1[i][k]*myArray2[k][j];
                }
            }
        }

        //printing the new multiplied matrix
        printf("Multiplied array :\n");
        for (int i =0;i<row1;++i){
            for(int j=0;j<column2;++j){
                printf("%d ",newArray[i][j]); 
            }
            printf("\n");
        }
        
        return 0;
    }
}