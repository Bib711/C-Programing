#include <stdio.h>

void Binary(int a[],int item,int idx){
	a[idx] = item;
	int ch,left,right;
	printf("Does %d has a left child(1/0): ",item);
	scanf("%d",&ch);
	if(ch == 1){
		printf("Enter left child of %d : ",item);
		scanf("%d",&left);
		Binary(a,left,idx*2);
	}
	
	printf("Does %d has a right child(1/0): ",item);
	scanf("%d",&ch);
	if(ch == 1){
		printf("Enter right child of %d : ",item);
		scanf("%d",&right);
		Binary(a,right,(idx*2+1));
	}
	
}

int main(){
	int a[100];
	for(int i =0; i<100;i++){
		a[i]=-1;
	}
	
	printf("Enter root element: ");
	int root;
	scanf("%d",&root);
	Binary(a,root,1);
	printf("\nArray of nodes:\n");
	for(int i=0;i<100;i++){
		if(a[i]!=-1){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	int ch = 1;
	int num,index;
	while(ch ==1){
		printf("Enter a node value: ");
		scanf("%d",&num);
		int found = 0;
		for(int i=0;i<100;i++){
			if(a[i]!=-1 && a[i] == num){
				
				index = i;
				found = 1;
				
			}
		}
		if(found == 0){ 
			printf("%d not found\n",num);
		}else{
			if(a[index/2]!=-1){
				printf("parent of %d is %d\n",num,a[index/2]);
			}else{
				printf("%d has no parent.\n",num);
			}
			
			if(a[index*2]!=-1){
				printf("left child of %d is %d\n",num,a[index*2]);
			}else{
				printf("%d has no left parent.\n",num);
			}
			
			if(a[index*2+1]!=-1){
				printf("right child of %d is %d\n",num,a[index*2+1]);
			}else{
				printf("%d has no right child.\n",num);
			}
		}
		printf("do you want to continue(1/0): ");
		scanf("%d",&ch);
	}
	
	
}
