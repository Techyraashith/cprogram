#include<stdio.h>
void main()
{
int mark[5] ,n ,i; 
printf("Enter the no of Elements:");
scanf("%d",&n);

for(i = 0; i < n; i++)
{
printf("\n Element %d:",i);
scanf("%d",mark[i]);
}
