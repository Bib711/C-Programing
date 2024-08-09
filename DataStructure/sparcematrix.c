
#include <stdio.h>
int main(){
    int row,col,k=1,count=0,tc=0;
    printf("Enter the no of rows nd columns of the marix(r c):");
    scanf("%d%d", &row,&col);
    int mat[row][col];
    printf("Enter values for matrix:\n");
    tc+=4;
    for(int i=0; i<row; i++){
        for(int j =0;j<col;j++){
    		printf("Enter mat[%d][%d]:",i,j);
        	scanf("%d",&mat[i][j]);
        	tc++;
        }
        tc++;
    }
    
    printf("\nThe entered matrix is:\n");
    tc+=4;
    for(int i=0; i<row; i++){
        for(int j =0;j<col;j++){
    		printf("%d ",mat[i][j]);
        	tc++;
        	if(mat[i][j]!=0){
        		count++;
		}
        }
        printf("\n");
        tc++;
    }
    
    int sparse[count+1][3];
    sparse[0][0]=row,sparse[0][1]=col;
    for (int i=0; i<row; i++){
    	for(int j=0; j<col; j++){
    		if(mat[i][j]!=0){
    			sparse[k][0]=i;
    			sparse[k][1]=j;
    			sparse[k][2]=mat[i][j];
    			k++;
    		}
    	}
    }
    sparse[0][2]=k-1;
    printf("The array representation is:");
    printf("\nROW\tCOLUMN\tVALUES\n");
    for(int i=0;i<k;i++){
    	printf("%d\t%d\t%d\t\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }
    return 0;
}
