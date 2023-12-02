#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define Size 6

int LinearQ[Size];
int Head = 0;
int tail = -1;
int Count = 0;

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

int main() {
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
}
