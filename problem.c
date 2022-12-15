#include <stdio.h>

int main(void)
{
	int tl,tt,Break,cl,lb,yy,xx;
	
	printf("\nEnter the total no of level :");
	scanf("%d",&tl);
	
	printf("\nEnter the remaing level :");
	scanf("%d",&xx);
	
	cl=xx-tl;
	
	printf("\nThe completed level of the game is %d:",cl);
	
	printf("\n\nEnter the 33 level taking break:");
	scanf("%d",&lb);
	
	Break = tl/33*lb;
	
	printf("\nThe Total break taking is :%d",Break);
	
	printf("\n\nEnter the each time taken for level :");
	scanf("%d",&yy);
	
	tt = tl*yy+Break;
	
	printf("\nThe Total Time to complete the game is :%d",tt);
	 
	
	return 0;
}