#include<stdio.h>
main()
{
	float a,b,c;
	printf("Enter three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	
	printf("The average is %g",(a+b+c)/3);
	getch();
}
