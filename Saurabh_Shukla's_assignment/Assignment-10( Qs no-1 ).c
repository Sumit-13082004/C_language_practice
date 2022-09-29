#include<stdio.h>
void nat(int);
main()
{
	int a,b;
	printf("Enter how many number you want to print:");
	scanf("%d",&a);
	
	nat(a);
	getch();
}
void nat(int s)
{
	int k;
	if(s>0)
	{
		nat(s-1);
		printf("%d ",s);
	}
	
}
