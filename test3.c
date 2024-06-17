/*# include <stdio.h>
# include <string.h>
# define ML 50
int main(){
    char Name[ML],Adrs[ML],city[ML],ph[ML];
    printf("Enter first string:"); 
    fgets(Name,sizeof(Name)/sizeof(Name[0]),stdin);
    printf("Enter second string:"); 
    fgets(Adrs,ML,stdin);
    int len = strlen(Name);
    printf("%d %d\n",len,sizeof(Name)/sizeof(Name[0]));
    Name[len-1]='\0';
    len--;
    for(int i =0 ; Adrs[i]!= '\n';i++,len++){
        Name[len] = Adrs[i];
    }
    printf("Concatinated string is:");
    for(int i =0; Name[i]!='\0';i++){
        printf("%c",Name[i]);
    }
    /*int flag =0;
    for(int i =0 ; i<len/2;i++){
        printf("%c",Name[len-i-2] );
        if (Name[i] != Name[len-i-2] ){
            flag = 1;
            break;
        }
        //printf("%c",Name[i]);
        //printf(" ");
    }
    (flag == 0)? printf("is palindrome.") : printf("Is not palindrome.");*/
    
    /*printf("Enter your Address:");
    fgets(Adrs,sizeof(Adrs)/sizeof(Adrs[0]),stdin);
    printf("Enter city:"); 
    fgets(city,sizeof(city)/sizeof(city[0]),stdin);
    printf("Enter Ph.No:"); 
    fgets(ph,sizeof(ph)/sizeof(ph[0]),stdin);
    printf("\nName:%s\nAddress:%s\nCity:%s\nPhone No:%s",Name,Adrs,city,ph);*/
   // return 0;
//}
/*#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the no:"); scanf("%d",&a);
    (a%2==0)?printf("%d is even",a):printf("%d is odd.",a);
    //(a%2==0)?printf("%d is even.",a):printf("%d is odd.",a);
    return 0;
}*/
/*
# include <stdio.h>
# include <string.h>
# define NL 50
struct Employee {
    char Name[NL];
    int Eid;
    float salary;
};

int main(){
    int n;
    printf("Enter no of employees:");scanf("%d",&n);
    struct Employee Eno[n];
    
    for (int i =0; i<n;i++){
        printf("\n\nEnter employee details of E-No:%d",i+1);
        printf("\nEnter Name:");scanf("%s",Eno[i].Name);
        //fgets(Eno[i].Name,sizeof(Eno[i].Name),stdin);
        //Eno[i].Name[strlen(Eno[i].Name)-1]='\0';
        printf("Enter Employee id:");scanf("%d",&Eno[i].Eid);
        printf("Enter employee salary:");scanf("%f",&Eno[i].salary);
    }

    //to display
    for (int i =0; i<n;i++){
        printf("\n\nEmployee details of E-No:%d",i+1);
        printf("\nEmployee Name:%s",Eno[i].Name);
        printf("\nEmployee id:%d",Eno[i].Eid);
        printf("\nEmployee salary:%.3f",Eno[i].salary);
    }
    return 0;
}*/

/*#include <stdio.h>
int srch(int arr[],int start,int size,int ele){
    size--;
    if(size<1) return-1;
    if(arr[start]==ele)return start;
    if(arr[size]==ele)return size;
    srch(arr,start++,size,ele);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5,ele =8,start=0;
    int index = srch(arr,start,size,ele);
    (index>=0)? printf("%d is found in position %d.",ele,index+1) : printf("Not found.");
    return 0;
}*/

/*#include <stdio.h>
int cdig(int num){
    if(num>10){
        return(1+cdig(num/10));
    }else return 1;
}
int dsum(int num){
   if(num>10){
    return(num%10+dsum(num/10));
   }else return num;
}

int fact(int num){
    if (num>=1){
        return(num*fact(num-1));
    }else return 1;
}

int rev(int num,int temp){
    
    if(num==0){
      return temp; 
    }
     temp = temp*10+num%10;
    return rev(num/10,temp);
}

int main(){
    int num,revr=0;
    printf("Enter a positive integer:");scanf("%d",&num);
    if(num>0){
        int digit = cdig(num);
        int sum = dsum(num);
        printf("%d",num);
        int facto= fact(num);
        int reve= rev(num,revr);
        printf("No of digits is %d",digit);
        printf("\nSum is %d",sum);
        printf("\n%d!=%d",num,facto);
        printf("\nReverse =%d",reve);
    }else{
        printf("Entered no is a -ve number.");
    }
    
    return 0;
}*/

/*#include <stdio.h>

void fabi(int n, int a,int b,int count){
    if(count<n){
        printf("%d,",a);
        fabi(n,b,a+b,count+1);
    }
}
int main(){
    int n;
    printf("enter no of terms:");scanf("%d",&n);
    if(n>0){
        fabi(n,0,1,0);
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>

void bin(int n){
    if(n != 0){
        bin(n/2);
    }
    printf("%d",n%2);
}

int main(){
    int n ;
    printf("Enter a integer:");scanf("%d",&n);
    printf("No in decimal is:");
    bin(n);
    return 0;
}*/

/*#include <stdio.h>

int sumo(int *a,int *b){
    return(*a+*b);
}

void swap(int *a,int *b){
    int temp = *a;*a=*b;*b=temp;
    
}

int main(){
    int sum,a=10,b=20;
    sum = sumo(&a,&b);
    printf("Sum is %d",sum);
    printf("\nBefore swapping a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}*/

#include <stdio.h>

int main(){
    char nam[20]="Ha ia ll";int count=0;char *ptr;
    ptr = nam;
    while(*ptr != '\0'){
        if(*ptr == ' '){
            count++;
            *ptr++;
        }*ptr++;
    }
    printf("Spaces = %d",count);
    return 0;
}