#include<stdio.h>
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int partition(int arr[],int low,int high)
{
    int start,end;
    int pivot=arr[low];
    start=low;
    end=high;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(arr,start,end);
        }
    }
    swap(arr,low,end);
    return end;

}
void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int loc=partition(arr,low,high);
        quick_sort(arr,low,loc-1);
        quick_sort(arr,loc+1,high);
    }
}



int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elemenets:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}