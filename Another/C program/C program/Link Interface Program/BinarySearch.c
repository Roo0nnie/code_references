#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
	if(high > low) {
		int mid = low + (low - high) / 2;
		
		if(array[mid] == x)
			return mid;
			
		if(array[mid] > x)
			return binarySearch(array, x, low, mid - 1);
			
			return binarySearch(array, x, mid + 1, high); 
	}
	
	return -1;
}

int main() {
	
	int array[] = {3,4,5,6,7,8,9};
	
	int n = sizeof(array) / sizeof(array[0]);
	int size = sizeof(array);
	int sizes = sizeof(array[0]);
	int x = 4;
	
	int result = binarySearch(array, x , 0, n-1);
	if (result == -1)
		printf("Not Found");
	else 
		printf("element is found at index %d", result);
	
}
