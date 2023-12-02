/*
						Searching
	Ronnie F. Estillero
	BSIT 2A		
*/
#include <stdio.h>
#define MAX 50

int main() {
	
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
	return 0;	
}
