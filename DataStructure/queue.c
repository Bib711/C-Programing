#include <stdio.h>

int front=-1;
int rear=-1;
void enqueue(int queue[],int N){
   int item;
   if(rear==N-1){
   	printf("Overflow");
   }
   else if(front ==-1&& rear ==-1){
   	front =0;rear =0;
   	printf("Enter the item:");
        scanf("%d",&item);
        queue[rear]=item;
   }	
   else {
     rear=rear+1;
     printf("Enter the item:");
     scanf("%d",&item);
     queue[rear]=item;
   }
}
void dequeue(int queue[],int N){
	int item;
	if(front ==-1&& rear ==-1){
		printf("Underflow");
	}
	else if(front == rear){
		printf("Deleted element is :%d",queue[front]);
		front= rear =0;
	}
	else{
		item=queue[front];
		front++;
		printf("Deleted element is :%d",item);
	}
}
void display(int queue[],int N){
	if(front==-1&&rear==-1){
		printf("queue is empty.");
	}
	else{
		
		printf("\nElemets in the queue are:\n");
		for(int i=front;i<rear+1;i++){
			printf("%d\n",queue[i]);
		}
	}
		
}


int main(){
	int choice,N;
	printf("Enter queue size:");
	scanf("%d",&N);
	int queue[N];
	char c = 'n';
	while(c == 'n'){
		printf("\n\n***MENU***\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\nEnter the choice:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				enqueue(queue,N);
				break;
			case 2:
				dequeue(queue,N);
				break;
			case 3:
				display(queue,N);
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
				
			
			
	
