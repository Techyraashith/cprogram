#include <stdio.h>

int main(void)

{
	int a,b,c;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	printf("Enter the value of c :");
	scanf("%d",&c);
	
	if (a >= b && a >= c) {
	
	printf("a is greater",a);

	}
	
	else if (b >= a && b >=c) {
		
	printf("b is greater",b);
	
	}
	
	else {
		
	printf("c is greater",c);
	}		
	
	
	
   return 0;
}