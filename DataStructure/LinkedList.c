#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* link;

}*head,*temp,*ptr,*ptr1,*ptr2;


void insertAtBeg(){
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL){
		printf("Memory not allocated.\n");
	}else{
	
		int item;
		printf("Enter item: ");
		scanf("%d",&item);
		temp->data = item;
		temp->link = head;
		head = temp;
		printf("%d inserted.\n",item);
		
	}
}

void  insertAtEnd(){
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL){
		printf("Memory not allocated.\n");
	}else{
		int item;
		printf("Enter item: ");
		scanf("%d",&item);
		if(head == NULL){
			temp->data = item;
			temp->link = NULL;
			head = temp;
		}else{
			ptr = head;
			while(ptr->link != NULL){
					ptr = ptr->link;
			}
			temp->data= item;
			ptr->link = temp;
			temp->link=NULL;	
		}
		printf("%d inserted.\n",item);
	}
}

void insertAtAny(){
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL){
		printf("Memory not allocated.\n");
	}else{
		if(head == NULL){
		
			printf("Search fails. The list is empty\n");
		
		}else{
		
			ptr = head;
			int key,item;
			printf("Enter the value after which the insertion is to be done: ");
			scanf("%d",&key);
			
			while((ptr->data != key) && (ptr->link!=NULL)){
				ptr= ptr->link;
			}
			
			if(ptr->data != key){
				printf("Search fails. The entered value is not found\n");	
			}else if(ptr->link == NULL){
				printf("Search fails. The entered value is at the end\n");
			}else{
				printf("Enter item: ");
				scanf("%d",&item);
				temp->data = item;
				temp->link = ptr->link;
				ptr->link = temp;
				printf("%d inserted",item);
			}
			
		}
	}
	
}
void delAtBeg(){
	if(head == NULL){
		printf("the list is empty.\n");
	}else{
		ptr1 =head;
		int item;
		if(ptr1->link == NULL){
			item = ptr1->data;
			head = NULL;
		}else{
			item = ptr1->data;
			head = ptr1->link;
		}
		printf("%d deleted.\n",item);
	}
}

void delAtEnd(){
	if(head==NULL){
		printf("The list is empty.\n");
	}else{
		ptr1 = head;
		int item;
		if(ptr1->link == NULL){
			item = ptr2->data;
			head = NULL;
		}else{
			ptr2 = ptr1->link;
			while(ptr2->link!=NULL){
				ptr1 = ptr1->link;
				ptr2 = ptr2->link;
			}
			item = ptr2->data;
			ptr1->link = NULL;
		}
		printf("%d deleted.\n",item);
	}
}

void delAtAny(){
	if(head == NULL){
		printf("The list is empty\n");
	}else{
		ptr1 = head;
		int item,key;
		printf("Enter the value after which deletion is to be done: ");
		scanf("%d",&key);
		
		if(ptr1->link == NULL){
			printf("Search fails.Only one element is present.\n");
		}else{
			while(ptr1->link != NULL && ptr1->data != key){
				ptr1 = ptr1->link;
			}
			if(ptr1->link == NULL && ptr1->data == key){
				printf("searched element is the last element.\n");
			}else if(ptr1->link == NULL){
				printf("Search fails. Number not found");
			}else{
				ptr2 = ptr1->link;
				if(ptr2->link == NULL){
					printf("Search fails. The number to be deleted is the last element.\n");
				}
				else{
					item = ptr2->data;
					ptr1->link = ptr2->link;
					printf("%d deleted.\n",item);
				
				}
			}
		}
	}
}

void display(){
	if(head == NULL){
		printf("list is empty\n");
	}else{
		ptr = head;
		while(ptr != NULL){
			printf("%d\t",ptr->data);
			ptr = ptr->link;
		}
	}
}


int main(){
	int ch;
	while(1){
		printf("\n\t\tMENU\n1)Insertion at beginning\n2)Inertion at end\n3)Insertion at any postion\n4)Deletion at Biginning\n5)Deletion at End\n6)Deletion At any position\n7)Display\n8)Exit\n");
		printf("Enter option: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insertAtBeg();
				break;
			case 2:
				insertAtEnd();
				break;
			case 3:
				insertAtAny();
				break;
			case 4:
				delAtBeg();
				break;
			case 5:
				delAtEnd();
				break;
			case 6: 
				delAtAny();
				break;
			case 7: 
				display();
				break;
			case 8:
				printf("Exiting...\n");
				return 1;
			default:
				printf("Invalid choice\n");
				break;
		} 
	}
}
