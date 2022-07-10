#include<stdio.h>
void main()
{
int no; 
printf("\n Enter any no:");
scanf("%d",&no);
if ((no % 5 == 0) && (no % 11 == 0))
{
printf("\n The no is divisible by 5 and 11 \n");
}
else
{
printf("\n The no is not devisible by 5 and 11 \n");
}
}
