#include<stdio.h>
main()
{
	int a,a1,b,c,i;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&a1);
	
	for(i=a<a1?a:a1;i>=1;i--)
	{
		if(a%i==0&&a1%i==0)
		{
			printf("The Hcf is %d",i);
			break;
		}
	}
	getch();
}
