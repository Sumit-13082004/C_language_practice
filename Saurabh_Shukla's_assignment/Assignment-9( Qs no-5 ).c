#include<stdio.h>
int sum_nat(int);
main()
{
	int a,s;
	printf("How many numbers:");
	scanf("%d",&a);
	
	s=sum_nat(a);
	printf("The sum is %d",s);
	getch();
}
int sum_nat(int r)
{
	int i,j,c=0;
	for(i=1;i<=r;i++)
	c+=i;
	
	return c;
}
