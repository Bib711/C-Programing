#include <stdio.h>
int main(){
    int target,i,temp,n;
    int arr[50];
    printf("\nEnter the no of integers:");
    scanf("%d",&n);
    printf("\nEnter the integers:");
    for (int i =0;i<n;++i){
        scanf("%d",&arr[i]);
    }
   for(int i =0;i<n;++i){
    for(int j =0;j<n-i-1;++j){
        if(arr[j]>arr[j+1]){
            temp= arr[j];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
   }


   // (count>0)? printf("Elemt found, count:%d",count):printf("Elemt not found.");
    return 0;
}