#include<stdio.h>
main()
{
	int a=8;
	int *b;
	b=&a;
	printf("%d,%d",&a,*b);
	getch();
}
