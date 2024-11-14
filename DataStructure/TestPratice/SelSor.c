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
    printf("\nUnSorted array:");
    for (int i =0;i<n;++i){
        printf("%d ",arr[i]);
    }
    int small,j;
    for(i=0;i<n;i++){
        small = i;
        j =i+1;
        while(j<n){
            if(arr[small]>arr[j]){
                small =j;
            }
            j++;
        }
        if(i!=small){
            temp=arr[i];
            arr[i]=arr[small];
            arr[small]=temp;
        }
    }
    

   /*for(int i =0;i<n;++i){
    for(int j =0;j<n-i-1;++j){
        if(arr[j]>arr[j+1]){
            temp= arr[j];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
   }*/

   printf("\nSorted array:");
    for (int i =0;i<n;++i){
        printf("%d ",arr[i]);
    }

   // (count>0)? printf("Elemt found, count:%d",count):printf("Elemt not found.");
    return 0;
}