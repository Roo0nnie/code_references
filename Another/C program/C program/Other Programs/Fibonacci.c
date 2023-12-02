#include<stdio.h>    
int main() {    

 	int next1=0, next2=1, next3, i=2, number=0;    
 
 	printf("Enter the number:");    
 	scanf("%d",&number);
 
	printf("Fibonacci series: ");    
 	printf("%d %d",next1,next2);    
 		for(i=2;i<number;++i) {    
  			next3=next1+next2;    
  			printf(" %d",next3);    
  
  			next1=next2;    
  			next2=next3;    
 	}
	   
  return 0;
    
 }    
