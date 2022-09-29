#include<stdio.h>
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	if(a%2==0)
	printf("This is even");
	
	else
	printf("This is odd");
	
	getch();
}
