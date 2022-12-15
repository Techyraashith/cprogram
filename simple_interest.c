#include <stdio.h>

int main(void)
{
	
	int i,p,n,r;
	
	printf("\nEnter the value of Principle :");
	scanf("%d",&p);
	
	printf("\nEnter the Rate of Interest :");
	scanf("%d",&r);
	
	printf("\nEnter the no of Month :");
	scanf("%d",&n);
	
	i = p*n*r/100;
	
	printf("The Value of Interest is : %d",i);
	
	
	return 0;
}