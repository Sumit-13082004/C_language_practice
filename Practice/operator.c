#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	
	b=a/2;
	b*=2;
	
	if(a==b)
	{
			printf("This is a Even");
	}
	else
	{
		printf("This is Odd");
	}
}
