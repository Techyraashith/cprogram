#include <stdio.h>

int main(void){
	int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;  
	printf("\n");    
    
    printf("%d + %d = %d", number1, number2, sum);
	
	return 0;
}