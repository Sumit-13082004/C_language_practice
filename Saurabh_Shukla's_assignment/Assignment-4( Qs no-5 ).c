#include<stdio.h>
main()
{
	int a=1,b,c=1;
	printf("First 10 even natural numbers: ");
	
	while(c<=10)
	{
		if(a%2==0)
		{
			printf("%d ",a);
			c++;
		}
		a++;
	}
	getch();
}
