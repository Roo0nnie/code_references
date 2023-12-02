#include <stdio.h>
#include <ctype.h>

#define BLANK ' '
#define TAB '\t'
#define Size 50

char infix[Size], postfix[Size];
int isempty();
int white_space(char symbol);
void infix_to_postfix();
int priority(char symbol);
char character, element;
char stack[Size];
int top=-1;       
 
void push(char element) {  //PUSH operation in stack
    stack[++top]=element;
}
char pop() {   //POP operation in stack      
    return(stack[top--]);
}
int priority(char symbol) {   //PRIORITY operation
	if(symbol == '^') //Exponent has the highest priority 
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')   //Has second highest priority 
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')    //Has last priority 
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int white_space(char symbol)
{
        if(symbol==BLANK || symbol==TAB || symbol=='\0')
                return 1;
        else
                return 0;
}

void infix_to_post() {
	
        int i,p,n;
        char next ;
        char symbol;
        char temp;
        n=strlen(infix);
        p=0;	
        int j=0;
        for(i=n-1; i>=0; i--)
        {
				symbol=infix[i];
                	if(!white_space(symbol)) {
                		 switch(symbol)
                        {
							case '(':
                                push(symbol);
                                break;
                                
                            case 'isalnum(symbol)':
                                postfix[j++]=symbol;
                                break;
                                
                            case ')':
                            	while( stack[top] != '(')
                        		postfix[j++]=pop();
                    			symbol=pop(); //Remove the ( character
						}
					}					 
		}
}

int main() {
        long int value;
        top = -1;
		printf("Enter Infix Notation: ");
		gets(infix);
		infix_to_post();
		
		return 0;
	
}
