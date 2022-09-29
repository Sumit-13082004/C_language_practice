#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	b=a/2;
	
	if(b*2==a)
	printf("This is even");
	
	else
	printf("This is odd");
	
	getch();
	
}
