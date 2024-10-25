#include<stdio.h>
int n;
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];

    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }


}

void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);

    }
}
int main(){
    int arr[100];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){23$ 

        scanf("%d",&arr[i]);
    }  
    printf("The unsorted array is\n");
    printf("\n-----------------------\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } 
    mergesort(arr,0,n-1);
      printf("\nSorted array is\n");
      printf("\n-----------------------\n");
     for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);

}
