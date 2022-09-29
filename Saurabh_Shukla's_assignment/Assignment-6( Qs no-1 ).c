#include<stdio.h>
main()
{
	int a,b=1,c=0;
	printf("Enter a number:");
	scanf("%d",&a);
	
	while(a>b)
	{
		if(a%b==0)
		c++;
		
		b++;
	}
	
	c==1?printf("Prime number"):printf("Not Prime number");
	getch();
}
