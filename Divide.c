#include <stdio.h>

int main(void)

{
	int dividend, divisor, quotient, remainder;
	
	printf("\nEnter dividend: ");
    scanf("%d", &dividend);
	
	printf("\nEnter divisor: ");
    scanf("%d", &divisor);

	  quotient = dividend / divisor;
	
	 remainder = dividend % divisor;
	
	
	 printf("\nQuotient = %d\n", quotient);
	
	printf("\nRemainder = %d", remainder);
	
	
	return 0;
}