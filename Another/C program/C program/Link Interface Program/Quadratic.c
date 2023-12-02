#include <stdio.h>
#include <math.h>

int main() {
	
	int a,b,c, disc = 0;
	int den = 0,x = 0, x1 = 0, x2 = 0;
	
	printf("Enter the value of A, B, C:");
	scanf("%d %d %d", &a, &b, &c);
	
	disc = ((b * b) - 4 *(a * c));
	den = 2 * a;
	
	if(disc > 0) {
		x1 = (-b + sqrt(disc) / den);
		x2 = (-b - sqrt(disc) / den);
		printf("%.3f\n", x1);
		printf("%.3f", x2);
	} else if(disc == 0) {
		x = (-b / den);
		printf("%.3f", x);
	} else {
		printf("No solution!");
	}
	
}
