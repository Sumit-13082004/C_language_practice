#include<stdio.h>
main()
{
	int a=1,b,c=1;
	printf("First 10 even natural numbers in reverse order:");
	
	while(c<=10)
	{
		if(a%2==0)
		{
			c++;
		}
		a++;
	}

	while(c>1)
	{
		if(a%2==0)
		{
			printf("%d ",a);
			c--;
		}
		a--;
	}	
	getch();
	
}
