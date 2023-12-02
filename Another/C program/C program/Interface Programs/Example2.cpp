#include <stdio.h>

//Deleting
int main() {
	
	int number[] = {1,2,3,4,5};
	int Position = 3;
	int k = 9; 
	
	int temp = number[3];
	for(int i=3;i<=4;i++) {
		number[i] = number[i+1];
	}
		for(int j=0;j<=3;j++) {
		printf("%i", number[j]);
	}
}
