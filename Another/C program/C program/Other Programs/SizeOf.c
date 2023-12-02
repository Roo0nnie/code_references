#include <stdio.h>

int main() {
	
	int array[] = {1,2,3,4,5,6,7};
	
	int size = sizeof(array) / sizeof(array[0]);
	printf("Size of the array: %i", size);
}

