#include<stdio.h>
main()
{
	int a,*p,**q;
	a=7;
	p=&a;
	q=&p;
	printf("%d %d",*q,*p);
	getch();
}
