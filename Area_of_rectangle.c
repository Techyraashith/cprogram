#include <stdio.h>

int main(void)
{
	int length,width,Area;
	
	printf("Enter The value of length :");
	
	scanf("%d",&length);
	
	printf("Enter the value of width :");
	
	scanf("%d",&width);
	
	Area = length * width;
	
	printf("The area of rectangle is: %d",Area);
	
	return 0;
}