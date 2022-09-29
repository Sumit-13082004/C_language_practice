#include<stdio.h>
void nat(int);
main()
{
	int a;
	printf("How many numbers you want to print:");
	scanf("%d",&a);
	
	nat(a);
	getch();
}
void nat(int r)
{
	int i,j;
	for(i=1;i<=r;i++)
	printf("%d ",i);
}
