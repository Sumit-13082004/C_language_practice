#include<stdio.h>
main()
{
	int a,b=0,i;
	printf("Enter a number:");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=b+(a%10);
		a/=10;
	}
	printf("The sum of digits is %d",b);
	getch();
}
