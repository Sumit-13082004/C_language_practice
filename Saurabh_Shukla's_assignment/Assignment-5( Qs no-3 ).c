#include<stdio.h>
main()
{
	int a,b=0;
	printf("Enter how many number:");
	scanf("%d",&a);
	
	while(a>0)
	{
		if(a%2!=0)
		b=b+a;
		
		a--;
	}
	printf("%d",b);
	getch();
}
