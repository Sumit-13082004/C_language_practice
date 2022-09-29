#include<stdio.h>
main()
{
	int a;
	printf("Enter a year:");
	scanf("%d",&a);
	
	if(a%4==0)
	printf("This is Leap year");
	
	else
	printf("This is normal year");
	
	getch();
}
