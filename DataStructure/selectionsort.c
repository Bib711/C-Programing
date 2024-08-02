//Selection Sort
#include <stdio.h>
int main(){
    int size, arr[50], tc=0,small,j,temp;
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
        j = i+1;
        small =i;
        while(j<size){
        	if(arr[small]>arr[j]){
        		small = j;
        		tc++;
        	}
        	j++;
        	tc++;	
        }
        if(i!= small){
        	temp=arr[i];
        	arr[i]=arr[small];
        	arr[small]=temp;
        	tc++;
	}
        tc++;
    }
    
    //sorted array printing
    printf("\nSorted array is:\n");
    tc+=size+1;
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    
    printf("\nTime complexity is %d", tc+4);
    printf("\nSpace Complexity is %d\n", (24+(8*size)));
    return 0;
}
