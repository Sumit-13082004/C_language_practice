#include<stdio.h>
void even_nat(int);
main()
{
	int a;
	printf("How many numbers you want to print:");
	scanf("%d",&a);
	
	even_nat(a);
	getch();
}
void even_nat(int r)
{
	int i=1,j;
	while(r>0)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			r--;
		}
		i++;
	}
}
