#include <stdio.h>

main() {
	
	int num1, num2, gcd=1,i=1;	
	
	printf("Enter 2 number to find its GCD: ");
	scanf("%i %i", &num1, &num2);
	
	for(i=1;i<=num1 && i<=num2; i++) {
		if(num1%i == 0 && num2%i == 0) {
			gcd = i;
		}
	}	printf("The GCD of %d and %d is %d.",num1,num2,gcd );
}
