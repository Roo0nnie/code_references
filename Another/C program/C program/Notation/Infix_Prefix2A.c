/*  C Program to convert infix to prefix and evaluate prefix expression  */

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define MAX 50

char infix[MAX], prefix[MAX];
int stack[MAX];
int top = -1;
int infix_pre_isempty();
int infix_pre_white_space(char character);
void infix_pre();
int infix_pre_priority(char character);
void infix_pre_push(long int character);
int infix_pre_pop();

void infix_pre() {
        int i,j,p,n;
        char next ;
        char character;
        char temp;
        n=strlen(infix);
        p=0;

        for(i=n-1; i>=0; i--) {
                character=infix[i];
                if(!infix_pre_white_space(character)) {
                        switch(character) {
                        case ')':
                                infix_pre_push(character);
                                break;
                        case '(':
                                while( (next=infix_pre_pop()) != ')')
                                        prefix[p++] = next;
                                break;
                        case '+':
                        case '-':
                        case '*':
                        case '/':
                        case '%':
                        case '^':
                                while( !infix_pre_isempty( ) &&  infix_pre_priority(stack[top])> infix_pre_priority(character) )
                                        prefix[p++] = infix_pre_pop();
                                infix_pre_push(character);
                                break;
                        default: /*if an operand comes*/
                             prefix[p++] = character;
                        }
                }
        }
        while(!infix_pre_isempty( ))
                prefix[p++] = infix_pre_pop();
        		prefix[p] = '\0'; /*End prefix with'\0' to make it a string*/

        for(i=0,j=p-1;i<j;i++,j--) {
                temp=prefix[i];
                prefix[i]=prefix[j];
                prefix[j]=temp;
        }
}/*End of infix_to_prefix()*/
/* This function returns the priority of the operator */
int infix_pre_priority(char character) {
        switch(character) {
        case ')':
                return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
        case '%':
                return 2;
        case '^':
                return 3;
        default :
                 return 0;
        }/*End of switch*/
}/*End of priority()*/

void infix_pre_push(long int character) {
	
            top=top+1;
            stack[top] = character;
        
}/*End of push()*/
int infix_pre_pop() {
        return (stack[top--]);
}/*End of pop()*/

int infix_pre_isempty() {
        if(top==-1)
                return 1;
        else
                return 0;
}
int infix_pre_white_space(char character) {
        if(character==' ' || character=='\t' || character=='\0')
                return 1;
        else
                return 0;
}/*End of white_space()*/

int main() {
        printf("Enter Infix Expression : ");
        scanf("%s",infix);
        infix_pre();
        printf("prefix : %s\n",prefix);

        return 0;
}/*End of main()*/

