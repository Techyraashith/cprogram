#include <stdio.h>
void main()
{
char ch;
printf("Enter any character: ");
scanf("%c", &ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
printf("%c is Vowel \n", ch);
}
else 
{
printf("%c is not Vowel \n", ch);
}
}
