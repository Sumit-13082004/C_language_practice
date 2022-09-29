#include<stdio.h>
float area(int);
main()
{
	int r;
	float s;
	
	printf("Enter the radius:");
	scanf("%d",&r);
	
	s=area(r);
	printf("The area is %g",s);
	getch();
}
float area(int a)
{
	float c;
	c=3.14*a*a;
	return c;
}
