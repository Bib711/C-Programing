#include <stdio.h>

void merge_sort(int a[], int len);
void merge_sort_recc(int a[],int l, int r);
void merge_srted_arr(int a[],int l,int m, int r);

int main(){
    int arr[] = {10,3,2,7,4,9,5,1};
    int len =8;
    merge_sort(arr,len);
    printf("Sorted array is :");
    for(int i=0;i<len;i++)
        printf("%d ",arr[i]);
}

void merge_sort(int a[], int len){
   merge_sort_recc(a,0,len-1);
}

void merge_sort_recc(int a[],int l, int r){
    if(l<r){
        int m = (l+r)/2;
        merge_sort_recc(a,l,m);
        merge_sort_recc(a,m+1,r);
        merge_srted_arr(a,l,m,r);
    }
}
void merge_srted_arr(int a[],int l,int m, int r){
    int left_len = (m-l)+1;
    int right_len = (r-m);

    int temp_left[left_len];
    int temp_right[right_len];

    for(int i=0;i<left_len;i++)
        temp_left[i]=a[l+i];
    
    for(int i=0;i<right_len;i++)
        temp_right[i]=a[m+1+i];
    int i,j,k;
    for(i=0,j=0,k=l;k<=r;k++){
        if((i<left_len)&&(j>=right_len)||temp_left[i]<=temp_right[j]){
            a[k]=temp_left[i];i++;
        }else{
            a[k]=temp_right[j];j++;
        }
    }
}

