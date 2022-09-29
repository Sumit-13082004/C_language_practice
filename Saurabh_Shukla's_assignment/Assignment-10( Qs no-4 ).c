#include<stdio.h>
void even_rev_nat(int);
main()
{
	int a;
	printf("How many number want to print:");
	scanf("%d",&a);
	
	even_rev_nat(a*2);
	getch();
}
void even_rev_nat(int s)
{
	if(s>0)
	{
		if(s%2==0)
		printf("%d ",s);
		
		even_rev_nat(s-1);
	}
}
