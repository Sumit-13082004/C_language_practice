#include<stdio.h>
float fact(int);
main()
{
	int n,r;
	float s;
	printf("Enter the value of n and r:");
	scanf("%d %d",&n,&r);
	
	s=fact(n)/fact(n-r);
	printf("The value of nPr is %g",s);
	getch();
}
float fact(int r)
{
	int i,c=1;
	for(i=1;i<=r;i++)
	{
		c=c*i;
	}
	return c;
}
