#include <stdio.h>

int main(void){
	int sub1,sub2,sub3,sub4,sub5,Regno,Name,Total;
	printf("=====Resulte=====");
	printf("\n\n");
	printf("Reg no:");
	scanf("%d",&Regno);
	printf("\n\n");
	printf("Name of the student:");
	scanf("%s",&Name);
	printf("\n\n");
	printf("sub1:\t");
	scanf("%d",&sub1);
	printf("\n\n");
	printf("sub2:\t");
	scanf("%d",&sub2);
	printf("\n\n");
	printf("sub3:\t");
	scanf("%d",&sub3);
	printf("\n\n");
	printf("sub4:\t");
	scanf("%d",&sub4);
	printf("\n\n");
	printf("sub5:\t");
	scanf("%d",&sub5);
	printf("\n\n");
	printf("*********************");
	printf("\n\n");
	printf("subs\t mark\t Result");
	printf("\n\n");
	printf("*********************");
	if(sub1 >= 35)
	{
		printf("\n\n");
		printf("_______________________");
		printf("\n\n");
		printf("sub1\t %d \t pass",sub1);
	
	}
	else
	{ 
		printf("\n");
		printf("_______________________");
		printf("\n\n");
		printf("sub1\t %d \t fail",sub1);
		
	}
	
	if(sub2 >= 35)
	{
		printf("\n");
		printf("_______________________");
		printf("\n\n");
		printf("sub2\t %d \t pass",sub2);
		
	}
	else
		{
		printf("\n");
		printf("_______________________");
		printf("\n\n");	
		printf("sub2\t %d \t fail",sub2);
		}
	
	if(sub3 >= 35)
	{
		printf("\n");
		printf("________________________");
		printf("\n\n");
		printf("sub3\t %d \t pass",sub3);
	}
	else
		{
		printf("\n");
		printf("________________________");
		printf("\n\n");		
		printf("sub3\t %d \t fail",sub3);
		}
		
	if(sub4 >= 35)
	{
		printf("\n");
		printf("________________________");
		printf("\n\n");
		printf("sub4\t %d \t pass",sub4);
	}
	else
		{
		printf("\n");
		printf("________________________");
		printf("\n\n");
		printf("sub4\t %d \t fail",sub4);
		}
		
	if(sub5 >= 35)
	{
		printf("\n");
		printf("________________________");
		printf("\n\n");
		printf("sub5\t %d \t pass",sub5);
		printf("\n");
		printf("________________________");
	}
	else
		{
		printf("\n");
		printf("________________________");
		printf("\n\n");
		printf("sub5\t %d \t fail",sub5);
		printf("\n");
		printf("________________________");
		
		}
	Total=sub1+sub2+sub3+sub4+sub5;
	printf("\n\n");
	printf("********************************");
	printf("\n");
	printf("Total=%d",Total);
	printf("\n");
	printf("*********************************");
	return 0;
}