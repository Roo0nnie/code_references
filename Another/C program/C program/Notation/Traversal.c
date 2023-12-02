/*
						Traversing
	Ronnie F. Estillero
	BSIT 2A		
*/
#include <stdio.h>
#define MAX 50

int main() {
	
	int i, size;
	char element[MAX];
	
	printf("Enter the size of array: ");
	scanf("%i", &size);
	
	printf("Enter an element/s: ");
	for(i=0;i<size;i++) {
		scanf(" %i", &element[i]);
	}
	
	printf("\nTraversing your Array\n");
	printf("Element/s in the array: ");
	for(i=0;i<size;i++) {
		printf("%i ", element[i]);
	}
	return 0;
}

