#include <stdio.h>
void main()
{
	int ch = 1;
	int limit, i, pos=-1, ele;
    	printf("Enter the total number of nodes: ");
    	scanf("%d", &limit);
    	int A[limit];  
    	printf("Enter the node data: ");
    	for (i = 0; i < limit; i++) {
        	scanf("%d", &A[i]);
    	}
    	printf("the formed array nodes\n");
    	for (i = 0; i < limit; i++) {
        	printf("%d\t", A[i]);
    	}
    	do{
	    	printf("\n\nEnter the element you want to check: ");
	    	scanf("%d", &ele);
	    	for (int i=0; i<limit; i++){
	    		if(A[i] == ele){
	    			pos = i;
	    			break;
	    		}
	    	}
	    	if(pos == -1){
	    		printf("Element not found");
	    	}else{
	    		printf("\nthe element at position %d is...%d\n",pos,A[pos]);
		    	if (pos < 0 || pos >= limit) {
				printf("Invalid position\n");
		    	}
		    	if (pos > 0) {
				printf("Parent of %d is: %d\n", A[pos], A[(pos-1) / 2]);
		    	} else {
				printf("No parent\n");
		    	}

		   
		    	if ((2 * pos)+1 >= limit) {
				printf("No left child\n");
		    	} else {
				printf("Left child of %d is: %d\n", A[pos], A[(2 * pos)+1]);
		    	}
		    	if ((2 * pos )+ 2 >= limit) {
				printf("No right child\n");
		    	} else {
				printf("Right child of %d is: %d\n", A[pos], A[(2 * pos )+ 2]);
		    	}
		}
	    	printf("\nDo you want to continue?(1/0): ");
	    	scanf("%d",&ch);
	}while(ch == 1);
	printf("\nExiting...\n");

}
