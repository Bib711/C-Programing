#include <stdio.h>
int main(){
    int target,i,count=0,n;
    int arr[50];
    printf("\nEnter the no of integers:");
    scanf("%d",&n);
    printf("\nEnter the integers:");
    for (int i =0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    (count>0)? printf("Elemt found, count:%d",count):printf("Elemt not found.");
    return 0;
}