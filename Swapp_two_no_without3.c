#include <stdio.h>

int main(void)

{ 
	int a,b;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	a = a + b;
	
	b = a - b;
	
	a = a - b;
	
	printf("\nAfter swapping the no a is : %d",a);
	
	printf("\nAfter swapping the no b is : %d",b); 
	
	return 0;
}