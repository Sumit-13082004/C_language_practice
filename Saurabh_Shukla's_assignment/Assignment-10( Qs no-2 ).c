#include<stdio.h>
void nat_rev(int);
main()
{
	int a;
	printf("Enter how many number want to print is reverse:");
	scanf("%d",&a);
	
	nat_rev(a);
	getch();
}
void nat_rev(int s)
{
	if(s>0)
	{
		printf("%d ",s);
		nat_rev(s-1);
	}
}
