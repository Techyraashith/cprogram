#include <stdio.h>

int main(void)

{
	int i,n;
	
	printf("Enter the table no:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	
	{
		printf("%d * %d = %d\n",i,n,(i*n));
	} 
	
		
	return 0;
}