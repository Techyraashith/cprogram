#include <stdio.h>

int main(void)

{
    int n1, n2, i, gcd;
	
	printf("\nEnter the value of n1: ");
    scanf("%d",&n1);
	
	printf("\nEnter the value of n2:");
	scanf("%d",&n2);
	
	for(i=1;i<= n1&&i<=n2;i++)
	
	{
	
	  if(n1%i==0 && n2%i==0)
	  {	
		gcd = i;
			
	  }
		
	}
	
	 printf("\nG.C.D of %d is %d",n1,gcd);
	 
	 printf("\nG.C.D of %d is %d",n2,gcd);
	
	return 0;
}