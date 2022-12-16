#include <stdio.h>

int main(void)

{
	int n,reverse = 0,remainder;
	
	printf("Enter the no :");
	scanf("%d",&n);
	
	while (n != 0)
	
	{
		remainder = n%10;
		
		reverse = reverse * 10 + remainder;
		
		n /= 10;
		
	}
	
	printf("Reverse no = %d",reverse);
		
	
	return 0;
}