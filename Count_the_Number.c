#include <stdio.h>

int main(void)

{
  long long n;

  int count = 0;
	
  printf("Enter an no: ");
  scanf("%lld", &n);
	
  do 
 {
		
    n /= 10;
		
    ++count;
		
  }  
	
   while (n != 0);

   printf("Number of digits: %d", count);
 
	
	return 0;
}