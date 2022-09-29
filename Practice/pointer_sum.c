#include<stdio.h>
void sum(int*,int*);
main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int *p,int *q)
{
	printf("The sum is %d",(*&p+*&q));
}
