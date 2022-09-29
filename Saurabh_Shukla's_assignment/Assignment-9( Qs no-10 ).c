#include<stdio.h>
float fact(int);
main()
{
	int n,r;
	float s;
	printf("Enter the value n and r:");
	scanf("%d %d",&n,&r);
	
	s=fact(n)/(fact(r)*fact(n-r));
	printf("The value of nCr is %g",s);
	getch();
	
}
float fact(int t)
{
	int i,c=1;
	for(i=1;i<=t;i++)
	c=c*i;
	
	return c;
}
