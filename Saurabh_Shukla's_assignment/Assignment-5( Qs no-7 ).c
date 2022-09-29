#include<stdio.h>
main()
{
	int a,b,c=0,i;
	printf("Enter a number:");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a/=10;
	}
	printf("The reverse is %d",c);
	getch();
}
