#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50

char postfix[MAX], stack[MAX];
int top = -1;

void post_pre_push(char c) {
  	stack[++top] = c;
}
char post_pre_pop() {
  
  return stack[top--];
} // A utility function to check if the given character is operand 
int  post_pre_checkIfOperand(char ch) {
	
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
} //function to check if it is an operator

int  post_pre_isOperator(char x) {
  switch (x) {
  case '+':
  case '-':
  case '/':
  case '*':
    return 1;
  }
  return 0;
}

int main() {
  int n, i, j = 0;
  char c[MAX];
  char a, b, op;

  printf("Enter Postfix expression : ");
  scanf("%s",postfix);

  n = strlen(postfix);

  for (i = n - 1; i >= 0; i--) {
    if (post_pre_isOperator(postfix[i])) {
      post_pre_push(postfix[i]);
    } else {
      c[j++] = postfix[i];
      
      	while ((top != -1) && (stack[top] == '#')) {
        	a = post_pre_pop();
        	c[j++] = post_pre_pop();
      }
      	post_pre_push('#');
    }
  }
  c[j] = '\0';

  i = 0;
  j = strlen(c) - 1;
  char d[MAX];

  while (c[i] != '\0') {
    d[j--] = c[i++];
  }

  printf("\nPrefix expression: %s\n", d);

  return 0;
}
