#include<stdio.h>
main()
{
	int a=1,b;
	printf("Enter how many number want to print:");
	scanf("%d",&b);
	
	while(a<=b)
	{
		printf("%d ",a);
		a++;
	}
	getch();
}
