#include<stdio.h>
#include<conio.h>
void add();//Function Global declaration or Function prototype
void main()
{
	add();
	getch();
}
void add()
{
	int a,b;//Local declaration
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	
	printf("Sum is %d",a+b);
	add();
}
