#include <stdio.h>

void main()
{
	
  int year;
	
  printf("Enter year : ");
  scanf("%d", &year);

  if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
  {

     printf("Leap year\n");
  
  }
	 

   else
  {
   
	printf("Common Year \n");
 
  }

return 0;
	
}
