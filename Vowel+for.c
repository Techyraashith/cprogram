#include <stdio.h>

int main(void)

{
	char c;
	
	int lowercase,uppercase,i;
	
	for(i=1;i<=2;i++)
	{
		printf("\n\nSolution %d\n",i);
	
	printf("\nEnter the alphabet :");
	scanf("%c",&c);
	
	lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	
	uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if (lowercase || uppercase)
	{
		printf("\n%c is Vowel",c);
		
	}
	
	else 
	{
		printf("\n%c is Consonant",c);
		
	}

}	
	
	
	return 0;
}