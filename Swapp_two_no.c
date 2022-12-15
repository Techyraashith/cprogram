#include <stdio.h>
 
int main(void)

{
	int a,b,c;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	c = a;
	
	a = b;
	
	b = c;
	
	printf("\nAfter swapping a is : %d",a);
	
	printf("\nAfter swapping b is : %d",b);
	
	
	return 0;
}