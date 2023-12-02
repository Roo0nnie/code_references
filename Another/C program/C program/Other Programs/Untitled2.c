#include <stdio.h>
#include <stdlib.h>

main() {
	
	int size;
	char arr[size];
	printf("Enter size of an array[]: ");
	scanf("%d", &size);
	printf("Enter %d number: ", size);
	for(int i=0;i<size;i++) {
		scanf("%d ", arr[i]);
	}printf("You entered number: ")
	for(int i=0;i<size;i++) {
		printf("%d ", arr[i]);
	}
	
	
}
