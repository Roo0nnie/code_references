/*  C Program to convert prefix to postfix using stack */

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define BLANK ' '
#define TAB '\t'
#define MAX 50

char *pre_post_pop();
char prefix[MAX];
char pre_post_stack[MAX][MAX];
void pre_post_push(char *str);
int pre_post_isempty();
int pre_post_white_space(char symbol);
void pre_post();
int pre_post_top;

int main()
{
        pre_post_top = -1;
        printf("Enter Prefix Expression : ");
        scanf("%s",prefix);
        pre_post();

}/*End of main()*/

void pre_post() {
        int i;
        char operand1[MAX], operand2[MAX];
        char symbol;
        char temp[2];
        char strin[MAX];
        for(i=strlen(prefix)-1;i>=0;i--)
        {
                symbol=prefix[i];
                temp[0]=symbol;
                temp[1]='\0';
                                
                if(!pre_post_white_space(symbol))
                {
                        switch(symbol)
                        {
                        case '+':
                        case '-':
                        case '*':
                        case '/':
                        case '%':
                        case '^':
                                strcpy(operand1,pre_post_pop());
                                strcpy(operand2,pre_post_pop());
                                strcpy(strin,operand1);
                                strcat(strin,operand2);
                                strcat(strin,temp);             
                                pre_post_push(strin);
                                break;
                        default: /*if an operand comes*/
                             pre_post_push(temp);
                        }
                }
        }
        printf("\nPostfix Expression :: ");
        puts(pre_post_stack[0]);
}/*End of prefix_to_postfix()*/


void pre_post_push(char *str) {
                pre_post_top=pre_post_top+1;
                strcpy( pre_post_stack[pre_post_top], str); 
}/*End of push()*/

char *pre_post_pop() {
    return (pre_post_stack[pre_post_top--]);
}/*End of pop()*/
int pre_post_isempty() {
        if(pre_post_top==-1) {
        	 return 1;
		} else {
			return 0;
		}        
}
int pre_post_white_space(char symbol) {
        if(symbol==BLANK || symbol==TAB || symbol=='\0')
                return 1;
        else
                return 0;
}/*End of white_space()*/
