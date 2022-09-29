#include<stdio.h>
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	b=a+b;
	a=b-a;
	b=b-a;
	
	printf("a=%d,b=%d",a,b);
	getch();
}
