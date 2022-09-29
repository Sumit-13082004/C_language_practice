#include<stdio.h>
main()
{
	int a,b,c,i;
	printf("Enter a number:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("%d ",i);
	}
	getch();
}
