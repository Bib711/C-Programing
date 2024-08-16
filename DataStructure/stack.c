#include <stdio.h>

int top=-1;
void push(int stack[],int N){
   int item;
   if(top>=N-1){
   	printf("Overflow");
   }
   else {
     printf("Enter the item:");
     scanf("%d",&item);
     top++;
     stack[top]=item;
   }
}
void pop(int stack[],int N){
	int item;
	if(top==-1){
		printf("Underflow");
	}
	else{
		item=stack[top];
		top--;
		printf("Popped element is :%d",item);
	}
}
void display(int stack[],int N){
	if(top==-1){
		printf("Stack is empty.");
	}
	else{
		
		printf("\nElemets in the stack are:\n");
		for(int i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
		
}


int main(){
	int choice,N;
	printf("Enter stack size:");
	scanf("%d",&N);
	int stack[N];
	char c = 'n';
	while(c == 'n'){
		printf("\n\n***MENU***\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n\nEnter the choice:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				push(stack,N);
				break;
			case 2:
				pop(stack,N);
				break;
			case 3:
				display(stack,N);
				break;
			case 4:
				printf("\nYou sure u wanna exit(y/n):");
				getchar();
				scanf("%c",&c);
				printf("\nExiting....");
				break;
				
			default:
				printf("Invalid choice selected.");
				break;
		}
		
	}
	return 0;
}
				
			
			
	
