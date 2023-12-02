#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define BLANK ' ' 
#define TAB '\t'
#define MAX 50
#define Max 5
#define Size 6
int array[Max],head = -1, tail = -1, Head=0,LinearQ[Size],Count = 0;
char stack[MAX], postfix[MAX], prefix[MAX], infix[MAX];
char *pre_post_pop();
char pre_post_stack[MAX][MAX];
void pre_post_push(char *str), pre_post(),infix_pre(), infix_pre_push(long int character);
int pre_post_isempty(), top=-1, infix_pre_priority(char character);
int pre_post_white_space(char symbol), pre_post_top, infix_pre_pop(); 
int infix_pre_isempty(), infix_pre_white_space(char character);

void Bubble() {
	
  int array[100], size, i, j, swap,Noswap=0,NoCom=0;
  	
  system("cls");
  printf("\n");
  printf("\t\t\t\t\t\t\t\t\t\tBUBBLE SORT\n\n");
  printf("     				Bubble sort is a sorting algorithm that compares two adjacent elements and ");
  printf("swaps them if they are not in the intended order.");
  
  printf("\n\nEnter number of elements: ");
  scanf("%d", &size);
  printf("Enter %d integers: ", size);
  	for (i = 0; i < size; i++)
   		 scanf("%d", &array[i]);
 			 for (i = 0 ; i< size - 1; i++) {
    			for (j = 0 ; j < size - i - 1; j++) {
      				if (array[j] > array[j+1]) {
        				swap       = array[j];
        				array[j]   = array[j+1];
       					 array[j+1] = swap;
        				Noswap++;
      }NoCom++;
    }
  }
  	printf("Ascending order: ");
  		for (i = 0; i < size; i++) {
  	   		printf("%d ", array[i]);
  }
    printf("\n\nNumber of swap: %d\n", Noswap);
    printf("Number of compare: %d", NoCom);
	printf("\n\nPress any key to exit...\n");	
	getchar();
	getchar();
}
void Selection() {
	
  int array[100], size, i, j, location, t;	
  
  system("cls");
  printf("\n");
  printf("\t\t\t\t\t\t\t\t\t\tSELECTION SORT\n\n");
  printf("     				The selection sort algorithm sorts an array by repeatedly finding the minimum ");
  printf("element (considering ascending order) from\n");
  printf("     	unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.\n\n\n\n");
  
  	printf("Enter number of elements: ");
	scanf("%d", &size);
  	
  printf("Enter %d integers: ", size);
 	 for (i=0;i<size;i++)
    	scanf("%d", &array[i]);
  			for (i=0;i<(size-1);i++) {
    			location = i;
    			for (j=i+1;j<size;j++) {
      				if (array[location] > array[j])
      				location = j;
   				 } if (location != i) {
      				t = array[i];
      				array[i] = array[location];
      				array[location] = t;
    		}
  		}
  		
  printf("Sorted list in ascending order: ");
  		for (i= 0;i< size; i++) {
  			printf("%d ", array[i]);
  		}	printf("\n\n\nPress any key to exit...\n");	
	getchar();
	getchar();
}
void Insertion() {
	
  int i, j, size, temp,array[100],k=0;
  	
  system("cls");
  printf("\n");
  printf("\t\t\t\t\t\t\t\t\t\tINSERTION SORT\n\n");
  printf("     				It is a sorting algorithm that builds the final sorted array one item at a time. Elements are transfered\n");
  printf(" 		one by one  at a time to the right position.\n\n\n\n");

	printf("Enter number of elements: ");
	scanf("%d",&size);
  		printf("Enter %d element/s: ", size);
   			for(i=0;i<size;i++) 
    			scanf("%d", &array[i]); 	
   			for(i=1;i<size;i++) {
      		temp=array[i];
      		j=i-1;
      		while((temp<array[j])&&(j>=0)){
         		array[j+1]=array[j];
         		j=j-1;
         		k++;
      		}
      array[j+1]=temp;
   }
   printf("Sorted list in ascending order: ");
   		for(i=0;i<size;i++) {
   	printf(" %d",array[i]);
   }
   	printf("\n\nNumber of swap: %d",k);
	printf("\n\n\nPress any key to exit...\n");	
	getchar();
	getchar();
}
void Line() {
	
	int array[100], search, i, size,k=0;
	
    system("cls");
  	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tLINEAR\n\n");
  	printf("     				A linear search, also known as a sequential search, is a method of finding an element within a list. It checks\n");
  	printf(" 		each element of the list sequentially until a match is found or the whole list has been searched..\n\nSample program......\n\n\n");
  	  
	printf("Enter number of elements: ");
	scanf("%d", &size);
  	printf("Enter %d integer(s): ", size);
  		for (i = 0; i < size; i++)
    	scanf("%d", &array[i]);
  	printf("Enter a number to search: ");
  	scanf("%d", &search);
  		for(i=0;i< size; i++) {
    		if (array[i] == search) {
      			printf("\n%d is present at index %d.\n", search, i);
      			break;
    	}k++;
  	} if(k==size) {
  		printf("\n%d isn't present in the array.\n\n\n", search);
  }
	printf("Press any key to exit...\n");	
	getchar();
	getchar();
}
void Binary() {
	
	int i, j, size, temp,array[100],k=0,search,middle,last,first;
	char input[200];
	FILE *file = fopen("Binary.c", "r");	
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tBINARY SEARCH\n\n");

	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
		}
	}
	fclose(file);
	
  	printf("\n\nSample program:\n\nEnter number of elements: ");
  	scanf("%d",&size);
  	printf("Enter %d element/s: ", size);
   		for(i=0;i<size;i++) 
     		scanf("%d", &array[i]); 	
   			for(i=1;i<size;i++) {
      		temp=array[i];
      		j=i-1;
      		
      while((temp<array[j])&&(j>=0)){
         array[j+1]=array[j];
         j=j-1;
         k++;
      }
      array[j+1]=temp;
   }
   		printf("Enter the value to find: ");
     	scanf("%d",&search);
   		printf("\nSorted array[]: ");
   			for(i=0;i<size;i++) {
	   			printf(" %d",array[i]);
	}
   first = 0;
   last = size - 1;
   middle = (first+last)/2;
   
   while (first <= last) {
      if (array[middle] < search) {
 		 first = middle + 1;        	
	  } else if (array[middle] == search) {
         printf("\n%d is present at index %d.\n\n", search, middle);
         break;
      } else
         last = middle - 1;
      	 middle = (first + last)/2;
   }
   if (first > last)
    	printf("\n%d isn't present in the array.\n\n", search);
		printf("Press any key to exit...\n");	
		getchar();
		getchar();
}
int factorial(int n) {  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
void Fact() {
	
    int number,fact;  	
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tFACTORIAL\n\n");
  	printf("     				Factorial of n is the product of all positive descending integers. Factorial of n is denoted by n!.\n");
  	printf("\nSample program......\n\n\n");
  	
	printf("Enter a number: ");  
  	scanf("%d", &number);   
   
  	fact = factorial(number);  
  	
	printf("Factorial of %d is %ld\n", number, fact);	
	printf("Press any key to exit...\n");	
	getchar();
	getchar();
}
void fi(int num){    
    static int num1=0,num2=1,num3;    
    if(num>0){    
         num3 = num1 + num2;    
         num1 = num2;    
         num2 = num3;    
         printf("%d ",num3);    
         fi(num-1);    
    }    
} 
void Fibb() {
	
    
	int num; 
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tFIBONACCI SERIES\n\n");
  	printf("     				Fibonacci is a series of number which the next number is the sum of previous two number. The first two numbers\n");
  	printf(" 		of fibonacci series are 0 and 1.\n\nSample program......\n\n\n");
   
    printf("Enter the number of elements: ");    
    scanf("%d",&num);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    fi(num-2); 
	getchar();	
	getchar();
}
void Gcd() {
	
	int num1,num2,gcd=1,i;
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tGREATEST COMMON DIVISOR\n\n");
  	printf("     				 It is the highest number that completely divides two or more numbers. It is abbreviated for GCD. It is also\n");
  	printf(" 		known as the Greatest Common Factor (GCF) and the Highest Common Factor (HCF). It is used to simplify the fractions.\n\nSample program......\n\n\n");	
	
	printf("Enter 2 number to find its GCD: ");
	scanf("%i %i", &num1, &num2);
	
	for(i=1;i<=num1 && i<=num2; i++) {
		if(num1%i == 0 && num2%i == 0) {
			gcd = i;
		}
	}	printf("The GCD of %d and %d is %d.",num1,num2,gcd );
	getchar();	
	getchar();
}

void Graphs() {
	
	char input[200];
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tGRAPH\n\n");

	FILE *file = fopen("Graph.c", "r");
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
		}
	}
	fclose(file);
	printf("\n\nPress any key to exit...\n");	
	getchar();
	NonLinearFun();
}
void Trees() {
	char input[200];
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tTREE\n\n");

	FILE *file = fopen("Tree.c", "r");

	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
		}
	}
	fclose(file);
	printf("\n\nPress any key to exit...\n");	
	getchar();
	NonLinearFun();
}
void Return() {
	getchar();
	Title();
}

void getback() {
	getchar();
	main();
}

void NonLinearFun() {
	getchar();
	NonLinear();
}
void LinearFun() {
	getchar();
	Linear();
}
void Array() {

	char input[200];
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tARRAY\n\n");

	FILE *file = fopen("Array.c", "r");

	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);	
		}
	}
	fclose(file);
	printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();
}
void LinkedList() {
	
	char input[200];	
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tLINKED LIST\n\n");

	FILE *file = fopen("LinkedList.c", "r");
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
		}
	}
	fclose(file);
	printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();
}
void Inf_Pos_push(char element) {  //PUSH operation in stack
    stack[++top]=element;
}
char Inf_Pos_pop() {   //POP operation in stack      
    return(stack[top--]);
}
int Inf_Pos_priority(char symbol) {   //PRIORITY operation
	if(symbol == '^') {//Exponent has the highest priority 	
		return(3);
	} else if(symbol == '*' || symbol == '/')  { //Has second highest priority 
		return(2);
	} else if(symbol == '+' || symbol == '-')  {  //Has last priority 
		return(1);
	} else {
		return(0);
	}
}
void Inf_Pos() {
    char infix[MAX], postfix[MAX], character, element;
    int i=0,j=0;
    
	system("cls");
	printf("		How infix to postfix conversion works in data structures\n");
	printf("		________________________________________________________\n\n\n");	

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
                if( character == ')') {
                    while( stack[top] != '(')
                        postfix[j++]=Inf_Pos_pop();
                    	element=Inf_Pos_pop(); //Remove the ( character
                } else {       //Precedence of the operators
                    while( Inf_Pos_priority(stack[top]) >= Inf_Pos_priority(character) )
                        postfix[j++]=Inf_Pos_pop();
                    	Inf_Pos_push(character);
                }
    }
    while( stack[top] != '#')     // Pop from stack till empty 
    
	postfix[j++]=Inf_Pos_pop();
    postfix[j]='\0';          // Make postfix as valid string 
    printf("\nPostfix Expression =  %s\n",postfix); 	
	printf("\n\nPress any key to exit...\n");
	getchar();	
	LinearFun();
}
void Pre_Inf() {
	system("cls");
	printf("		How prefix to infix conversion works in stack\n");
	printf("		_____________________________________________\n\n\n");		
	printf("\n\nPress any key to exit...\n");	
	getchar();
	getchar();
	LinearFun();
}
void pre_post() {
        int i;
        char operand1[MAX], operand2[MAX];
        char symbol;
        char temp[2];
        char strin[MAX];
        for(i=strlen(prefix)-1;i>=0;i--) {
                symbol=prefix[i];
                temp[0]=symbol;
                temp[1]='\0';
                                
                if(!pre_post_white_space(symbol)) {
                        switch(symbol) {
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
    	printf("\n\nPress any key to exit...\n");	
		getchar();
		LinearFun();    
        
}
void pre_post_push(char *str) {
     pre_post_top=pre_post_top+1;
     strcpy( pre_post_stack[pre_post_top], str); 
}

char *pre_post_pop() {
    return (pre_post_stack[pre_post_top--]);
} //End of pop()
int pre_post_isempty() {
    if(pre_post_top==-1) {
       	return 1;
	} else {
		return 0;
	}        
}
int pre_post_white_space(char symbol) {
    if(symbol==BLANK || symbol==TAB || symbol=='\0') {
       	return 1;
	} else {
		return 0;
	}   
}/*End of white_space()*/
void Pre_Pos() {
	system("cls");
	printf("		How Prefix to Postfix works in stack\n");
	printf("		____________________________________\n\n\n");
        
        pre_post_top = -1;
        printf("Enter Prefix Expression : ");
        scanf("%s",prefix);
        pre_post();
}
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
void Pos_Pre() {
  	int n, i, j = 0;
  	char c[MAX];
  	char a, b, op;
  	
	system("cls");
	printf("		How postfix to prefix conversion works in stack\n");
	printf("		_______________________________________________\n\n\n");
	
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
	  	
	printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();
}	
void Pos_Inf() {
	system("cls");
	printf("		How  postfix to infix conversion works in stack\n");
	printf("		_______________________________________________\n\n\n");		
	printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();
}
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
void Inf_Pre() {
	system("cls");
	printf("		How  infix to prefix conversion works in stack\n");
	printf("		______________________________________________\n\n\n");
        
	printf("Enter Infix Expression : ");
    scanf("%s",infix);
	infix_pre();
    printf("prefix : %s\n",prefix);			
	printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();	
}
void Stack() {
	
	char input[200],c;

	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tSTACK\n\n");

	FILE *file = fopen("Stack.c", "r");

	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
		}
	}
	fclose(file);
	do {
		printf("Select: ");
		c = getchar();
		
	} while (c != '1' && c != '2' && c != '3' && c != '4'  && c != '5'  && c != '6'  && c != '0' && c != '9');	
	if(c == '1') {
		Inf_Pos();
	} else if(c == '2' ) {
		Pre_Inf();
	} else if(c == '3') {
		Pre_Pos();
	} else if(c == '4') {
		Pos_Pre();
	} else if(c == '5') {
		Pos_Inf();
	} else if(c == '6') {
		Inf_Pre();
	} else if (c == '0') {
		LinearFun();
	} else {
		getback();	 
	}
}
int peek() {
   return LinearQ[Head];
}

bool isEmpty() {
   return Count == 0;
}

bool isFull() {
   return Count == Size;
}

int size() {
   return Count;
}  

void insert(int data) {

   if(!isFull()) {
	
      if(tail == Size-1) {
         tail = -1;            
      }       

      LinearQ[++tail] = data;
      Count++;
   }
}

int removeData() {
   int data = LinearQ[Head++];
	
   if(Head == Size) {
      Head = 0;
   }
	
   Count--;
   return data;  
}
void LinearQueue() {
   /* insert 5 items */
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);

   // front : 0
   // rear  : 4
   // ------------------
   // index : 0 1 2 3 4 
   // ------------------
   // queue : 3 5 9 1 12
   insert(15);

   // front : 0
   // rear  : 5
   // ---------------------
   // index : 0 1 2 3 4  5 
   // ---------------------
   // queue : 3 5 9 1 12 15
	
   if(isFull()) {
      printf("Queue is full!\n");   
   }

   // remove one item 
   int num = removeData();
	
   printf("Element removed: %d\n",num);
   // front : 1
   // rear  : 5
   // -------------------
   // index : 1 2 3 4  5
   // -------------------
   // queue : 5 9 1 12 15

   // insert more items
   insert(16);

   // front : 1
   // rear  : -1
   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15

   // As queue is full, elements will not be inserted. 
   insert(17);
   insert(18);

   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15
   printf("Element at head: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isEmpty()) {
      int n = removeData();           
      printf("%d ",n);
   }
       printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();   	
}
// Check if the queue is full
int Full() {
  if ((head == tail + 1) || (head == 0 && tail == Max - 1)) return 1;
  return 0;
}

// Check if the queue is empty
int Empty() {
  if (head == -1) return 1;
  return 0;
}

// Adding an element
void add(int element) {
  if (Full())
    printf("\n Queue is full!! \n");
  else {
    if (head == -1) head = 0;
    tail = (tail + 1) % Max;
    array[tail] = element;
    printf("\n Inserted -> %d", element);
  }
}

// Removing an element
int deQueue() {
  int element;
  if (Empty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = array[head];
    if (head == tail) {
      head = -1;
      tail = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      head = (head + 1) % Max;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}
// Display the queue
void display() {
  int i;
  if (Empty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Head -> %d ", head);
    printf("\n Array -> ");
    for (i = head; i != tail; i = (i + 1) % Max) {
      printf("%d ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n Tail -> %d \n", tail);
  }
}
void CircularQueue() {
  // Fails because front = -1
  deQueue();

  add(1);
  add(2);
  add(3);
  add(4);
  add(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  add(6);

  display();
  deQueue();

  display();

  add(7);
  display();

  // Fails to enqueue because front == rear + 1
  add(8);	
    printf("\n\nPress any key to exit...\n");	
	getchar();
	LinearFun();
}
void Queue() {

	char input[200], c;

	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tQUEUE\n\n");

	FILE *file = fopen("Queue.c", "r");
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
		}
	}
	fclose(file);
	do {
		printf("Select: ");
		c = getchar();
		
	} while (c != '1' && c != '2' &&  c != '0' && c != '9');	
	if(c == '1') {
		CircularQueue();
	} else if(c == '2' ) {
		LinearQueue();
	} else if (c == '0') {
		LinearFun();
	} else {
		getback();	 
	}	
}
void Sort() {
	
	char c;
	
	system("cls");
	printf("\n");
	printf("		SORTING\n");
	printf("		_______\n\n");
	printf("	[1] Bubble Sort\n");
	printf("	[2] Selection Sort\n");
	printf("	[3] Insertion Sort\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		c = getchar();
		
	} while (c != '1' && c != '2' && c != '3' && c != '0' && c != '9');
	
	if(c == '1') {
		Bubble();
	} else if(c == '2' ) {
		Selection();
	} else if(c == '3') {
		Insertion();
	} else if (c == '0') {
		Return();
	} else {
		getback();	 
	}
}	
void Search() {
	
	char c;
	
	system("cls");
	printf("\n");
	printf("		SEARCHING\n");
	printf("		________\n\n");
	printf("	[1] Binary Search\n");
	printf("	[2] Linear Search\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		c = getchar();
		
	} while (c != '1' && c != '2' && c != '0' && c != '9');
	
	if(c == '1') {
		Binary();
	} else if(c == '2' ) {
		Line();
	} else if (c == '0') {
		Return();
	} else {
		getback();	 
	}
}	
void Recursive() {

	char c;
	
	system("cls");
	printf("\n");
	printf("		Recursive\n");
	printf("		_________\n\n\n");
	printf("	[1] Fibonnacci\n");
	printf("	[2] Factorial\n");
	printf("	[3] GCD\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		c = getchar();
	} while (c != '1' && c != '2' && c != '3' && c != '0' && c != '9');
	if(c == '1') {
		Fibb();
	} else if(c == '2' ) {
		Fact();
	} else if(c == '3') {
		Gcd();
	} else if (c == '0') {
		Return();
	} else {
		getback();	 
	}
}
void Linear() {

	char c;
	
	system("cls");
	printf("\n");
	printf("		Linear Data Structures\n");
	printf("		______________________\n\n\n");
	printf("	[1] Array\n");
	printf("	[2] Linked List\n");
	printf("	[3] Stack\n");
	printf("	[4] Queue\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		c = getchar();
	} while (c != '1' && c != '2' && c != '3' && c != '4' && c != '0' && c != '9');
	if(c == '1') {
		Array();
	} else if(c == '2' ) {
		LinkedList();
	} else if(c == '3') {
		Stack();
	} else if (c == '4') {
		Queue();
	} else if (c == '0') {
		Return();
	} else {
		getback();	 
	}
}
void NonLinear() {

	char c;
	
	system("cls");
	printf("\n");
	printf("		Non-Linear Data Structures\n");
	printf("		__________________________\n\n\n");
	printf("	[1] Graphs\n");
	printf("	[2] Trees\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select:");
		c = getchar();
	} while (c != '1' && c != '2' && c != '0' && c != '9');
	if(c == '1') {
		Graphs();
	} else if(c == '2' ) {
		Trees();
	} else if (c == '0') {
		Return();
	} else {
		getback();
	}	
}
void Quadratic() {
	
	int a,b,c, disc = 0;
	int den = 0,x = 0, x1 = 0, x2 = 0;	
	
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tQUADRATIC EQUATION\n\n");
  	printf("     				  a quadratic equation is any equation that can be rearranged in standard form as a x 2 + b x + c = 0.\n");
  	printf(" 		Polynomial equation in a single variable where the highest exponent of the variable is 2.\n\nSample program......\n\n\n");

	printf("Enter the value of A, B, C:");
	scanf("%d %d %d", &a, &b, &c);
	
	disc = ((b * b) - 4 *(a * c));
	den = 2 * a;
	
	if(disc > 0) {
		x1 = (-b + sqrt(disc) / den);
		x2 = (-b - sqrt(disc) / den);
		printf("%.3f\n", x1);
		printf("%.3f\n", x2);
	} else if(disc == 0) {
		x = (-b / den);
		printf("%.3f\n", x);
	} else {
		printf("No solution!\n");
	}
	printf("\n\nPress any key to exit...\n");	
	getchar();
	Return();
}
void StringFun() {
	getchar();
	StringOp();
}
void Merging() {
	
	system("cls");
	printf("		How merging works in data structures\n");
	printf("		____________________________________\n\n\n");
	int i, first,second, j;
	char First[MAX], Second[MAX], Merge[MAX];
	
	printf("Enter size of 1st Array: ");
	scanf("%i", &first);
	
	printf("Enter an element/s: ");
	for(i=0;i<first;i++) {
		scanf(" %i", &First[i]);
	}
	
	printf("Enter size of second Array: ");
	scanf("%i", &second);
		
	printf("Enter an element/s: ");
	for(i=0;i<second;i++) {
		scanf(" %i", &Second[i]);
	}	
	for(i=0;i<first;i++) {
		Merge[i] = First[i];	
	}
	for(i=first,j=0;i<first+second,j<second;i++,j++) {
		Merge[i] = Second[j];
	}
	printf("Merge: ");
	for(i=0;i<first+second;i++) {
		printf("%i ", Merge[i]);
	}
	printf("\n\nPress any key to exit...\n");	
	getchar();
	StringFun();	
}
void Deleting() {
	
	system("cls");
	printf("		How deleting works in data structures\n");
	printf("		_____________________________________\n\n\n");
	int i, size, insert, index; 
	char elements[MAX];
	
	printf("Enter size of Array: ");
	scanf("%i", &size);
	
	printf("Enter an element/s: ");
	for(i=0;i<size;i++) {
		scanf(" %i", &elements[i]);
	}
	printf("Arrays: ");
	for(i=0;i<size;i++) {
		printf("%i ", elements[i]);
	}
	
	printf("\n\ndelete index: 0 to %i? ", size-1);
	scanf("%i", &index);
	
	if((index > size-1) || (index < 0)) {
		printf("Error!");
	} else {	
		for(i=index;i<=size;i++) {
			elements[i] = elements[i+1];
		}
		for(i=0;i<size-1;i++) {
			printf("%i ", elements[i]);
		}
	}
	printf("\n\nPress any key to exit...\n");	
	getchar();
	StringFun();	
}
void Searching() {
	
	system("cls");
	printf("		How searching works in data structures\n");
	printf("		______________________________________\n\n\n");
	int i, size, search;
	char elements[MAX];
	
	printf("Enter size of Array: ");
	scanf("%i", &size);
	
	printf("Enter an element/s: ");
	for(i=0;i<size;i++) {
		scanf(" %i", &elements[i]);
	}
	printf("Arrays: ");
	for(i=0;i<size;i++) {
		printf("%i ", elements[i]);
}
	printf("\nEnter element to search: ");
	scanf("%i", &search);

	for(i=0;i<size;i++) {
		if(search == elements[i]) {
			printf("Element found at index[%i]\n", i);
		}
	}
	printf("\n\nPress any key to exit...\n");	
	getchar();
	StringFun();	
}
void Sorting() {
	
	system("cls");
	printf("		How sorting works in data structures\n");
	printf("		____________________________________\n\n\n");
	int i, size, insert, Noswap, j, swap=0, NoCom=0;
	char elements[MAX];
	
	printf("Enter size of Array: ");
	scanf("%i", &size);
	
	printf("Enter an element/s: ");
	for(i=0;i<size;i++) {
		scanf(" %i", &elements[i]);
	}
 			 for (i = 0 ; i< size - 1; i++) {
    			for (j = 0 ; j < size - i - 1; j++) {
      				if (elements[j] > elements[j+1]) {
        				swap = elements[j];
        				elements[j]   = elements[j+1];
       					elements[j+1] = swap;
        				Noswap++;
      }NoCom++;
    }
  }
  	printf("\nAscending order: ");
  		for (i = 0; i < size; i++) {
  	   		printf("%d ", elements[i]);
  }
    printf("\n\nNumber of swap: %d\n", Noswap-1);
    printf("Number of compare: %d", NoCom);

	printf("\n\nPress any key to exit...\n");	
	getchar();
	StringFun();	
}
void Traversal() {
	
	system("cls");
	printf("		How traversal works in data structures\n");
	printf("		______________________________________\n\n\n");
	int i, size;
	char element[MAX];
	
	printf("Enter the size of array: ");
	scanf("%i", &size);
	
	printf("Enter an element/s in the array: ");
	for(i=0;i<size;i++) {
		scanf(" %i", &element[i]);
	}
	printf("\nTraversing your Array\n");
	printf("Element/s in the array: ");
	for(i=0;i<size;i++) {
		printf("%i ", element[i]);
	}
	printf("\n\nPress any key to exit...\n");	
	getchar();
	StringFun();	
}
void Inserting() {
	
	system("cls");
	printf("		How inserting works in data structures\n");
	printf("		______________________________________\n\n\n");
	int i, size, insert, index; 
	char elements[MAX];
	
	printf("Enter size of Array: ");
	scanf("%i", &size);
	
	printf("Enter an element/s: ");
	for(i=0;i<size;i++) {
		scanf(" %i", &elements[i]);
	}
	printf("Arrays: ");
	for(i=0;i<size;i++) {
		printf("%i ", elements[i]);
	}
	
	printf("\n\nElement to be insert: ");
	scanf("%i", &insert);
	
	printf("Insert at what index, 0 to %i: ", size-1);
	scanf("%i", &index);
	
	if((index > size-1) || (index < 0)) {
		printf("Error!");
	} else {
		
		for(i=size; i>=index;i--) {
			elements[i] = elements[i - 1];
		}	
			elements[index] = insert;

			for (i = 0; i < size+1; i++) {
				printf("%i ", elements[i]);
			}	
		}
	printf("\n\nPress any key to exit...\n");	
	getchar();
	StringFun();	
}
 void StringOp() {
 	
 	char c;
	
	system("cls");
	printf("\n");
	printf("		String Operation In Data Structures\n");
	printf("		___________________________________\n\n\n");
	printf("	[1] Deleting\n");
	printf("	[2] Merging\n");
	printf("	[3] Searching\n");
	printf("	[4] Sorting\n");
	printf("	[5] Traversal\n");	
	printf("	[6] Inserting\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select:");
		c = getchar();
	} while (c != '1' && c != '2' && c != '3' && c != '4' && c != '5' && c != '6' && c != '0' && c != '9');	
	if(c == '1') {
		Deleting();
	} else if(c == '2' ) {
		Merging();
	} else if(c == '3' ) {
		Searching();
	} else if(c == '4' ) {
		Sorting();
	} else if(c == '5' ) {
		Traversal();
	} else if(c = '6' ) {
		Inserting();
	} else if (c == '0') {
		Return();
	} else {
		getback();
	}	
	
 }
void Title() {
	
	char c;
	
	system("cls");
	printf("\n");
	printf("		DATA STRUCTURE & ALGORITHM\n");
	printf("		__________________________\n\n\n");
	printf("	[1] Linear Data Structures\n\n");
	printf("	[2] Non-Linear Data Structures\n\n");
	printf("	[3] Searching\n\n");
	printf("	[4] Sorting\n\n");
	printf("	[5] Recursive\n\n");
	printf("	[6] QUADRATIC EQUATION\n\n");
	printf("	[7] String Operation\n\n");
	printf("	[0] Quit\n");
	printf("\n");
	
	do {
		printf("Select:");
		c = getchar();
		
	} while (c != '0' && c != '1' && c != '2' && c != '3' && c != '4' && c != '5' && c != '6'  && c != '7');
	if(c == '1') {
		Linear();
		Title();
	} else if(c == '2' ) {
		NonLinear();
		Title();
	} else if(c == '3'){
		Search();
		Title();	
	} else if (c == '4') {
		Sort();
		Title();
	} else if(c == '5') {
		Recursive();	
	} else if(c == '7') {
		StringOp();
		Title();
	} else if(c == '6') {
		Quadratic();
		Title();	
	} else {
		getback();
	}	 
}
main () {
	
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("										WELCOME\n\n");
	printf("\									   	  TO\n\n");
	printf("								   	DATA STRUCTURE & ALGORITHM\n\n\n\n");
	printf("								          Ronnie F. Estillero\n");
	printf("								        	BSIT 2A\n\n\n\n");

	printf("Press any key to continue.....\n");
	getchar();
	Title();
}
