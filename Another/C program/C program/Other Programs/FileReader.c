#include <stdio.h>

main() {
	
	FILE *file = fopen("Array.txt", "r");
	char input[200];
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
	}
	}
	
	fclose(file);
	
}
