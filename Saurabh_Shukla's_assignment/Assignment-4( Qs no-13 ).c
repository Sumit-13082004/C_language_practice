#include<stdio.h>
main()
{
	int a=1,b,c,num;
	printf("Enter how many number want to print:");
	scanf("%d",&num);
	
	while(a<=num)
	{
		printf("%d ",a*a);
		a++;
	}
	getch();
}
