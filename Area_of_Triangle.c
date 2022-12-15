#include <stdio.h>

int main(void)
{
	int Area,base,height,i;
	
	for (i=1;i<=3;i++)
	{
		printf("solution %d\n",i);
	
	printf("\nEnter the base of the triangle :");
	
	scanf("%d",&base);
	

	printf("\nEnter the height of the triangle :");
	
	scanf("%d",&height);
	
	
	Area = 0.5 * base * height;
	
	printf("\nThe Area of the triangle is : %d\n\n",Area);	
	}
	
	return 0;
}