# include <stdio.h>

struct polynomial{
	int coeff;
	int expo;	
}arr[20];

int main(){
	int terms;
	printf("Enter the no of terms:");
	scanf("%d",&terms);
	for(int i =0; i<terms;i++){
		printf("\nEnter coefficent of term %d:",i+1);
		scanf("%d",&arr[i].coeff);
		printf("Enter exponents of term %d:",i+1);
		scanf("%d",&arr[i].expo);
	}
	printf("\n\nThe polynomial is:");
	for(int i =0; i<terms;i++){
		if(arr[i].expo ==0){
			printf("%d",arr[i].coeff);
			break;
		}
		else{
			printf("%dx^%d",arr[i].coeff,arr[i].expo);
		}
		if(i<terms-1){
			printf("+");
		}
		
	}
	return 0;
}

