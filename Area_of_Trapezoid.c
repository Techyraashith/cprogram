#include <stdio.h>

int main(void)

{
	int base1,base2,height,Area;
	
	printf("Enter the value of base1 :");
	
	scanf("%d",&base1);
	
	printf("Enter the value of base2 :");
	
	scanf("%d",&base2);
	
	printf("Enter the value of height :");
	
	scanf("%d",&height);
	
	Area = 0.5 * base1 + base2 * height;
	
	printf("The Area of trapezoid is %d",Area);
	
	return 0;
}