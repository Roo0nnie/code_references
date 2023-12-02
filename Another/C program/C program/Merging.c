/*
						Merging
	Ronnie F. Estillero
	BSIT 2A		
*/
#include <stdio.h>
#define MAX 50

int main() {
	
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
	
	return 0;	
}
