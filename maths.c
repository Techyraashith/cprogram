#include <stdio.h>

int main(void){
	int t1,t2,t3,fo1,fo2,fo3,fr1,fr2,fr3,d1,d2,d3,w;
	
	printf("enter t1:");
	scanf("%d",&t1);
	printf("enter t2:");
	scanf("%d",&t2);
	printf("enter t3:");
	scanf("%d",&t3);
	printf("\n\n");
	printf("enter fr1:");
	scanf("%d",&fr1);
	printf("enter fr2:");
	scanf("%d",&fr2);
	printf("enter fr3:");
	scanf("%d",&fr3);
	printf("\n\n");
	printf("enter fo1:");
	scanf("%d",&fo1);
	printf("enter fo2:");
	scanf("%d",&fo2);
	printf("enter fo3:");
	scanf("%d",&fo3);
	printf("\n\n");
	
	printf("To = %di + %dj + %dk",t1,t2,t3);
	printf("\n\n");
	printf("from = %di + %dj + %dk",fr1,fr2,fr3);
	printf("\n\n");
	printf("force = %di + %dj + %dk",fo1,fo2,fo3);
	printf("\n\n");
	d1 = t1 - fr1;
	d2 = t2 - fr2;
	d3 = t3 - fr3;
	printf("\n\n Displacements = To - From\n");
    printf("\n %di + %dj + %dk",t1,t2,t3);
    printf("\n -(%di + %dj + %dk)",fr1,fr2,fr3);
    printf("\n%di + %dj + %dk\n\n",d1,d2,d3);

	printf("\n\n=====Displacement======");
	printf("\n\n Displacement = %d,%d,%d",d1,d2,d3);
	printf("\n\n=====Displacement======");
	printf("\n\n");
	printf("\n\n Work Done = Force . Displacement \n");
	printf("\n (%di + %dj + %dk)",fo1,fo2,fo3);
    printf(" . ");
    printf("(%di + %dj + %dk)\n\n",d1,d2,d3);

	w=(d1*fo1)+(d2*fo2)+(d3*fo3);
	printf("\n\n====workdone====");
	printf("\n\n workdone = %d",w);
	printf("\n\n====workdone====");
	
	
	
	return 0;
}