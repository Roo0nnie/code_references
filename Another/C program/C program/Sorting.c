/*
						Sorting
	Ronnie F. Estillero
	BSIT 2A		
*/
#include <stdio.h>
#define MAX 50

int main() {
	
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
	
	return 0;
	}
	

