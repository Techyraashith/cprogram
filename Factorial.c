#include <stdio.h>

int main(void)

{
	int i,n;
	
	unsigned long long fact = 1;
	
	printf("Enter the no:");
	scanf("%d",&n);
	
	if(n<0)
	{
	  
	   printf("Error! Factorial of a negative number doesn't exist.");
		
	}
	
	else
	{
		for(i=1;i<=n;i++)
		{
			fact*=i;
			
		}
		
		 printf("Factorial of %d = %llu", n, fact);
		
	}
  
	
	
	return 0;
}