#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	a++;
	b++;
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	a--;
	b--;
	
	printf("a=%d,b=%d",a,b);
	getch();
}
