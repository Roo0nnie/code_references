/*
						Deleting
	Ronnie F. Estillero
	BSIT 2A		
*/
#include <stdio.h>
#define MAX 50

int main() {
	
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
	return 0;
}
