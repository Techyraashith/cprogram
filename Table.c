#include <stdio.h>

int main(void){
	int i,n,n1;
	printf("enter no of table:");
	scanf("%d",&n);
	printf("which count you want:");
	scanf("%d",&n1);
	for(i=1; i<=n1; i++)
	{
      printf("%d * %d = %d\n", i, n, (i*n));
		
		
}
	
	return 0;
}