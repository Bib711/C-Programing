//Tutorial ----> 11

//Q1 to search for an element in an array
/*#include <stdio.h>
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
}*/

//Q2 to find the no of digits and its sum of a +ve integer using recursive fcn 
/*#include <stdio.h>
int cdig(int num){
    if(num>10){
        return (1+cdig(num/10));
   } else return 1;
}
int dsum(int num){
   if(num>10){
        return (num%10+dsum(num/10));
   } else return num;
}

int main(){
    int digit = cdig(213);
    int sum = dsum(231);
    printf("No of digits is %d",digit);
    printf("\nSum is %d",sum);
    return 0;
}*/

//Q3 to reverse a null terminating string
/*#include <stdio.h>
void rev(char arr[],char res[],int start,int size){
    if (size<0){
        res[start]='\0'; }
    else{
        res[start]= arr[size];
        rev(arr,res,++start,--size);
    }     
}

int main(){
    char arr[5] = {'1','2','3','4','5'};
    char res[5];
    int size = (sizeof(arr)/sizeof(arr[0]))-1,start=0;
    printf("Before reversing:");
    int i =0;
    while (i<=size){
        printf("%c ",arr[i]);
        i++;
    }
    rev(arr,res,start,size);
    printf("\nAfter reversing:");
    i =0;
    while (i<=size){
        printf("%c ",res[i]);
        i++;
    }
    return 0;
}*/

//Q4 to convert a decimal no to binary using recursion
/*#include <stdio.h>
void decToBinary(int n) {
    //printf("%d\n",n);
    if (n / 2 != 0) {
        decToBinary(n / 2);
    }
    printf("%d\n",n);
    //printf("%d", n % 2);
}


int main() {
    int num = 10;
    printf("The binary representation of %d is: ", num);
    decToBinary(num);
    return 0;
}*/

//Q5 to check wheather the string is palindrrome or not using recursive fcn
#include <stdio.h>
#include <string.h>
int pali(char arr[],int start,int size){
    if(start<size){
        if( arr[start] != arr[size]){
            return 0; 
        }
        pali(arr,++start,--size);
    }else{
        return 1;
    }   
}

int main(){
    char arr[100];
    printf("Enter the string:");fgets(arr,sizeof(arr),stdin);
    int size = strlen(arr)-2,start=0;
    int res = pali(arr,start,size);
    (res==1)? printf("Is palindrome") : printf("Is not palindrome.");
    return 0;
}