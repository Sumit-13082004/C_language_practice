#include<stdio.h>
main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	
	if(a>0)
	printf("This is a positive number");
	
	if(a<0)
	printf("This is a negative number");
	
	if(a==0)
	printf("This is zero");
	
	getch();
}
