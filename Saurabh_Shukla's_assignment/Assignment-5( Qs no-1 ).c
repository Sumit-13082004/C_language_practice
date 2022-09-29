#include<stdio.h>
main()
{
	int a,b=0,c,i=1;
	printf("Enter how many number:");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=b+(a*a);
		a--;
	}
	printf("%d",b);
	getch();
}
