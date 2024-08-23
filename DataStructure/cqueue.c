#include <stdio.h>

int front=-1;
int rear=-1;
void encqueue(int cqueue[],int N){
   int item;
   if(front == (rear+1)%N){
   	printf("Overflow");
   }
   else if(front ==-1&& rear ==-1){
   	front =0;rear =0;
   	printf("Enter the item:");
        scanf("%d",&item);
        cqueue[rear]=item;
   }	
   else {
     rear=(rear+1)%N;
     printf("Enter the item:");
     scanf("%d",&item);
     cqueue[rear]=item;
   }
}
void decqueue(int cqueue[],int N){
	int item;
	if(front ==-1&& rear ==-1){
		printf("Underflow");
	}
	else if(front == rear){
		printf("Deleted element is :%d",cqueue[front]);
		front= rear =-1;
	}
	else{
		item=cqueue[front];
		front= (front+1)%N;
		printf("Deleted element is :%d",item);
	}
}
void display(int cqueue[],int N){
	if(front==-1&&rear==-1){
		printf("cqueue is empty.");
	}
	else{
		
		printf("\nElemets in the cqueue are:\n");
		int i = front ;
		while (1){
			printf("%d ",cqueue[i]);
			if(i==rear) break;
			i= (i+1)%N;
		}
	}
	printf("\n");		
}


int main(){
	int choice,N;
	printf("Enter cqueue size:");
	scanf("%d",&N);
	int cqueue[N];
	char c = 'n';
	while(c == 'n'){
		printf("\n\n***MENU***\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\nEnter the choice:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				encqueue(cqueue,N);
				break;
			case 2:
				decqueue(cqueue,N);
				break;
			case 3:
				display(cqueue,N);
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
				
			
			
	
