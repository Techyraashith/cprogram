#include <stdio.h>

#include <math.h>

int convertDecimalToOctal(int decimalNumber);

int main(void)

{
	 int decimalNumber;
	
      printf("\nEnter a decimal number: ");
      scanf("%d", &decimalNumber);
	
	  printf("\n%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));
	
	 return 0;
}

int convertDecimalToOctal(int decimalNumber) 

{
	  int octalNumber = 0, i = 1;	
	
	  while (decimalNumber != 0) 
	
	{
		octalNumber += (decimalNumber % 8) * i;
		
		decimalNumber /= 8;
		
		 i *= 10;
		
	}
	
	return octalNumber;
	
}

