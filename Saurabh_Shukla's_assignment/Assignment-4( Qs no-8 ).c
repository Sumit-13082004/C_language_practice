#include<stdio.h>
main()
{
	int a=1,b,c=1,num;
	printf("How many even number you want to print:");
	scanf("%d",&num);
	
	while(num>=c)
	{
		if(a%2==0)
		{
			b=a;
			c++;
		}
		a++;
	}
	c=1;
	
	while(num>=c)
	{
		if(b%2==0)
		{
			printf("%d ",b);
			c++;
		}
		b--;
	}
	getch();
}
