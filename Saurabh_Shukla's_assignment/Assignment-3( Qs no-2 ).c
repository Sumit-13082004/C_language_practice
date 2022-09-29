#include<stdio.h>
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	if(a%5==0)
	printf("Divisible by 5");
	
	else
	printf("Not Divisible by 5");
	
	getch();
}
