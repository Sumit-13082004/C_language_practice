#include<stdio.h>
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	a/=10;
	printf("The number without last digit:%d",a);
	getch();
}
