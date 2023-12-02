#include <stdio.h>
#include <ctype.h>
#define MAX 50            

//Global declaration
char stack[MAX];
int top=-1;       
 
void Inf_Pos_push(char element)
{  //PUSH operation in stack
    stack[++top]=element;
}
char Inf_Pos_pop()
{   //POP operation in stack      
    return(stack[top--]);
}
int Inf_Pos_priority(char symbol)
{   //PRIORITY operation
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
  // Start -- 
int main()
{                        
	//Local declaration
    char infix[MAX], postfix[MAX], character, element;
    int i=0,j=0;
    
    printf("Enter Infix Expression : ");
    scanf("%s",infix);
    
    Inf_Pos_push('#'); //Indicating if the stack is empty
    while((character=infix[i++]) != '\0')
    {
        if( character == '(') 
			Inf_Pos_push(character);
        else
            if(isalnum(character)) 
			postfix[j++]=character;
            else
                if( character == ')')
                {
                    while( stack[top] != '(')
                        postfix[j++]=Inf_Pos_pop();
                    	element=Inf_Pos_pop(); //Remove the ( character
                }
                else
                {       //Precedence of the operators
                    while( Inf_Pos_priority(stack[top]) >= Inf_Pos_priority(character) )
                        postfix[j++]=Inf_Pos_pop();
                    	Inf_Pos_push(character);
                }
    }
    while( stack[top] != '#')     // Pop from stack till empty 
    
	postfix[j++]=Inf_Pos_pop();
    postfix[j]='\0';          // Make postfix as valid string 
    printf("\nPostfix Expression =  %s\n",postfix); 
    
    return 0;
}


