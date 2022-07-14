#include <stdio.h>

int main(void){
	int sub1,sub2,sub3,sub4,sub5,Regno,Name;
	printf("=====Resulte=====");
	printf("\n\n");
	printf("enter the Reg no:");
	scanf("%d",&Regno);
	printf("\n\n");
	printf("enter the Name of the student:");
	scanf("%d",&Name);
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
	
	if(sub1 >= 35)
	{
		printf("%d \t pass",sub1);
	}
	else
	{ 
		printf("%d \t fail",sub1);
	
	if(sub2 >= 35)
	{
		printf("%d \t pass",sub2);
	}
	else
		{
			printf("%d \t fail",sub2);
		}
	
	if(sub3 >= 35)
	{
		printf("%d \t pass",sub3);
	}
	else
		{
			printf("%d \t fail",sub3);
		}
		
	if(sub4 >= 35)
	{
			printf("%d \t pass",sub4);
	}
	else
		{
			printf("%d \t fail",sub4);
		}
		
	if(sub5 >= 35)
	{
			printf("%d \t pass",sub5);
	}
	else
		{
			printf("%d \t fail",sub5);
		}	

	
	return 0;
}