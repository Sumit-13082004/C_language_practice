#include<stdio.h>
main()
{
	float p,r,t,I,k;
	printf("Enter principal, ratio and time:");
	scanf("%f%f%f",&p,&r,&t);
	
	k=p*r*t;
	printf("The simple interest is %g",I=k/100);
	getch();
}
