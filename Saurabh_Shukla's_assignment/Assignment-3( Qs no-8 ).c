#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	printf("%d is greater",a);
	
	else
	printf("%d is greater",b);
	
	getch();
}
