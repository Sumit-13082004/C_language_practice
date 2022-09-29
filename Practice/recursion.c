#include<stdio.h>
int print(int);
main()
{
	int n=4,ans;

	printf("%d",print(6));
}

int print(int a)
{
	if(a<2)
	return a;
	
	return print(a-1)+print(a-2);
	
}
