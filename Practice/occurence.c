#include<stdio.h>
main()
{
	int a,a1,b,c=0,i=1;
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter the digit:");
	scanf("%d",&a1);
	
	while(a>0)
	{
		b=a%10;
		if(b!=a1)
		{
			c=c+(b*i);
			i*=10;
		}
		
		a/=10;
	}
	printf("The number is %d",c);
	getch();
}
