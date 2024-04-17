//Tutorial ----> 9

//to print grater amoung the sum of odd and even nos in an array
#include <stdio.h>

int main(){
    int size,arr1[100],sEven=0,sOdd=0;
    printf("Enter the size of the array:");scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    //for entering elements to the array
    for (int i=0 ; i<size ; ++i){
        printf("Enter the element for index %d:",i);
        scanf("%d",&arr1[i]);
    }
    //for adding the sum to sEven or SOdd based on the condition
    for (int i=0 ; i<size ; ++i){
        if(arr1[i]%2 ==0){
            sEven += arr1[i];
        }
        else{
            sOdd += arr1[i];
        }    
    }
    //printing the largest amoung sEven and sOdd
    (sEven>sOdd) ? printf("Sum of even nos are %d.",sEven) : printf("Sum of odd nos are %d.",sOdd);
    
    return 0;
}