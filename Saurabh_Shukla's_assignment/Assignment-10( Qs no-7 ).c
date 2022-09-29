#include<stdio.h>
int sum_nat(int);
main()
{
	int a,t;
	printf("Enter a number:");
	scanf("%d",&a);
	
	t=sum_nat(a);
	printf("The sum is %d",t);
	getch();
}
int sum_nat(int s)
{
	int r;
	if(s>0)
	{
		r=s+sum_nat(s-1);
		return r;
	}
}
