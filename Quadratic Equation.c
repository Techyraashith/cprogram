#include <stdio.h>
#include <math.h>

int main(void)

{
	double a,b,c,discriminant,root1,root2,realpart,imagpart;
	
	printf("Enter the coefficient a:");
	scanf("%lf",&a);
	
	printf("\nEnter the coefficient b:");
	scanf("%lf",&b);
	
	printf("\nEnter the coefficient c:");
	scanf("%lf",&c);
	
	discriminant = b * b - 4 * a * c;
	
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		
		printf("\nroot1 = %.2lf",root1);
		
		printf("\nroot2 = %.2lf",root2);	
		
	}
	
	else if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		
		printf("\nroot1 = root2 = %.2lf",root1);
		
	}
	
	else {
		
		realpart =-b/(2 * a);
		
        imagpart = sqrt(-discriminant) / (2 * a);
		
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realpart, imagpart, realpart, imagpart);
    }
		

	
	return 0;
}