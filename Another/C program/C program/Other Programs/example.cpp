#include <stdio.h>

main() {
	
	int row;
	
	printf("Enter number of row: ");
	scanf("%i", &row);
	
	for(int i=row;i>=1;i--) {
		for(int j=1;j<=i;j++) {
			printf("%i ", j);
		}
		printf("\n");
	}
}

