#include <stdio.h>

//Deleting
int main() {
	
	int number[] = {1,2,3,4,5};
	int Position = 3;
	int setA = 9;

	int temp = number[2];
	for(int i=3;i<=4;i++){
			number[i-1] = number[i+1];	
	}
	for(int j=0;j<=4;j++) {
		printf("%i", number[j]);
	}
	
}
