//Binary search
#include <stdio.h>
int main(){
    int size, arr[50], tc=0;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter values for array:\n");
    tc+=4;
    tc+=size+1;
    for(int i=0; i<size; i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
        tc++;
    }
    
    //sorting array
    tc +=size+1;
    tc += (size*(size+1));
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                tc++;
            }
        }
        tc++;
    }
    
    //sorted array printing
    printf("\nSorted array is:\n");
    tc+=size+1;
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    int target, flag=0, l=0, r=size-1, mid;
    printf("\nEnter the target:");
    scanf("%d", &target);
    tc+=3;
    while(l<=r){
        mid =(l+r)/2;
        if(arr[mid]==target){
            tc++;
            flag=1;
            break;
        }
        else if(arr[mid]>target){
            tc++;
            r=mid-1;
        }
        else{
            tc++;
            l=mid+1;
        }
        tc++;
    }
    
    (flag>0) ? printf("%d found at position %d.", target, mid+1) : printf("Target not found.");
    tc+=3;
    printf("\nTime complexity is %d", tc+3);
    printf("\nSpace Complexity is %d", (64+(8*size)));
    return 0;
}