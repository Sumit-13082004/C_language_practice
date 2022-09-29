#include<stdio.h>
void even_nat(int);
main()
{
	int a;
	printf("How many even number want to print:");
	scanf("%d",&a);
	
	even_nat(a*2);
	getch();
}
void even_nat(int s)
{
	
	if(s>0)
	{
		even_nat(s-1);
		if(s%2==0)
		printf("%d ",s);
	}
}
