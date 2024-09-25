# include <stdio.h>
#include <stdlib.h>
# include <ctype.h>

char stack[100];
int top =-1;
void push(char x){
	if(top>=100-1){
		printf("\nstack overflow");
	}else{
		stack[++top]=x;
	}
}
char pop(){
	if(top==-1){
		printf("\nstack underflow");
		exit(0);
	}else{
		return(stack[top--]);
	}
}

int priority(char x){
	if(x=='('){
		return 0;
	}if (x=='+'||x=='-'){
		return 1;
	}if(x=='*'||x=='/'){
		return 2;
	}if(x=='^'){
		return 3;
	}
	return 0;
}

void inTopo(char exp[]){
	int i =0;
	char x;
	while(exp[i]!='\0'){
		if (isalnum(exp[i])){
			printf("%c",exp[i]);
		}
		else if(exp[i] =='('){
			push(exp[i]);
		}
		else if(exp[i]==')'){
			while((x=pop()) != '('){
				printf("%c",x);
			}
		}else{
			while(top != -1 && priority(stack[top])>= priority(exp[i])){
				printf("%c",pop());
			}
			push(exp[i]);
		}
		i++;
	}
	while(top!=-1){
		printf("%c",pop());
	}
}

int main(){
	char exp[100];
	printf("enter the expression:");
	scanf("%s",exp);
	
	printf("Postfix expression:");
	inTopo(exp);
	
	return 0;
}
				
 
		

