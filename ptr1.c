#include <stdio.h>

int add(int *a, int *b ){
	return (*a + *b);
}

int swap(int *a, int *b ){
	int temp = *a;
	*a = *b;
	*b = temp;
}

char stop(){
    char decision;
    printf("\nYou sure u wanna exit?(y/n):");
    scanf(" %c",&decision);
    return decision;   
}

int main(){
	int num1,num2,sum,choice;
	char decision = 'n';
	
	do{
		printf("\n\n Menu:\n1.Add 2 nos.\n2.Swap 2 nos.\n3.Exit\nChoose any option:");
		scanf("%d",&choice);
		switch (choice) {
		 case 1:
			printf("Enter first no:");
			scanf("%d",&num1);
			printf("Enter second no:");
			scanf("%d",&num2);
			sum = add(&num1,&num2);
			printf("Sum of %d and %d is %d.",num1,num2,sum);
			break;
		case 2:
			printf("Enter first no:");
			scanf("%d",&num1);
			printf("Enter second no:");
			scanf("%d",&num2);
			printf("Before Swapping a=%d and b=%d.",num1,num2);
			swap(&num1,&num2);
			printf("\nAfter Swapping a=%d and b=%d.",num1,num2);
			break;
		case 3:
			decision = stop();
                	break;
                default:
		        printf("Invalid choice.\n");
		        break;
				}
	}while(decision == 'n' || decision == 'N');
    return 0;
}
