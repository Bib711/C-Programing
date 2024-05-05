//Tutorial ----> 11

//Q1 to search for an element in an array

#include <stdio.h>
int srch(int arr[],int start,int size,int ele){
    size--;
    if (size<1)return -1;
    if (arr[start]==ele)return start;
    if (arr[size]==ele)return size;      
    srch(arr,start++,size,ele);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5,ele =2,start=0;
    int index = srch(arr,start,size,ele);
    (index>=0)? printf("%d is found in position %d.",ele,index+1) : printf("Not found.");
    return 0;
}