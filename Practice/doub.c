#include<stdio.h>
void fun(int*,int);
main()
{
	int a[5],i;
	fun(a,5);
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	
}
void fun(int *b,int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("Enter a number:");
		scanf("%d",&b[i]);
	}
	getch();
}

