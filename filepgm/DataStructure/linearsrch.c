//linear search
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
    
    int target, flag=0, i=0, count=0;
    printf("\nEnter the target:");
    scanf("%d", &target);
    tc+=3;
    tc+=(size+1);
    for(i=0; i<size; i++){
        if(arr[i]==target){
            flag=1;
            count++;
            tc++;
        }
    }
    
    (flag>0) ? printf("%d found, count =%d.", target, count) : printf("Target not found.");
    tc+=4;
    printf("\nTime complexity is %d", tc);
    printf("\nSpace complexity is %d", (24+(4*size*size)));
    return 0;
}