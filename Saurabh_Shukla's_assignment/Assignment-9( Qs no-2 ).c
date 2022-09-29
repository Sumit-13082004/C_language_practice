#include<stdio.h>
float cir(int);
main()
{
	int r;
	float s;
	printf("Enter the radius:");
	scanf("%d",&r);
	
	s=cir(r);
	printf("The circumference is %g",s);
	getch();
	
}
float cir(int a)
{
	float c;
	c=2*3.14*a;
	return c;
}

