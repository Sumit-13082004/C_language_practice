#include<stdio.h>
main()
{
	int a,b=1,i;
	printf("Enter a number:");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=b*a;
		a--;
	}
	printf("The factorial is %d",b);
	getch();
}
