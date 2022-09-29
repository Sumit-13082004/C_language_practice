#include<stdio.h>
main()
{
	int a,a1,b,c,i;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&a1);
	
	for(i=a>a1?a:a1;i<=a*a1;i++)
	{
		if(i%a==0&&i%a1==0)
		{
			printf("The Lcm is %d",i);
			break;
		}
	}
	getch();
}
