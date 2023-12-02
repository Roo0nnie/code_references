#include <stdio.h>

main() {
	
	int row, i=1;
	
	printf("Enter the number of row: ");
	scanf("%i", &row);

	for(i=1; i<=row; ++i) {
		printf("%i ", i);
		
		if(i == row) {
			printf("\n");	
		}	
	}
}
