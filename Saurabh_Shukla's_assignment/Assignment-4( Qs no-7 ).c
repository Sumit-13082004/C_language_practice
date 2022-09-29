#include<stdio.h>
main()
{
	int a=1,num,c;
	printf("How many even number want to print:");
	scanf("%d",&num);
	
	while(c<=num)
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
