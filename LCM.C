#include <stdio.h>

int main(void)

{
    int n1, n2, max;
	
	printf("\nEnter the value of n1:");
    scanf("%d",&n1);
	 
	printf("\nEnter the value of n2:");
	scanf("%d",&n2);
	
	 max = (n1 > n2) ? n1 : n2;

	while (1)
	
	{
		 if ((max % n1 == 0) && (max % n2 == 0)) 
		
		{
			 printf("\nThe LCM of %d is %d.",n1,max);
	      
			 printf("\n\nThe LCM of %d is %d.",n2,max);
			
			    break;
			
		}	
		
		    ++max;
	}

	
	return 0;
}