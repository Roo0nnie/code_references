#include <stdio.h>

int main() {
	
	int number[] = {1,2,3,4,5};
	int Position = 3;
	int setA = 3;
	
	for(int i=4;i>=3;i--) {
		number[i+1] = number[i]+1;
	}
	number[2] = 3;
	
	for(int j=0;j<=5;j++) {
		printf("%i", number[j]);
	}
	
}
