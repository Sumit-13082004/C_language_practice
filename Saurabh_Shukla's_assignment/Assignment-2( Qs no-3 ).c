#include<stdio.h>
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	a%=10;
	printf("The last digit is %d",a);
	getch();
}
