#include<stdio.h>
int fact(int);
main()
{
	int a,s;
	printf("Enter a number:");
	scanf("%d",&a);
	
	s=fact(a);
	printf("The factorial is %d",s);
	getch();
	
}
int fact(int r)
{
	int i,c=1;
	for(i=1;i<=r;i++)
	{
		c=c*i;
	}
	return c;
}
