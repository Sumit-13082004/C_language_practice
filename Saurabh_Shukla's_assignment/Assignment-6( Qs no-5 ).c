#include<stdio.h>
main()
{
	int a,a1,b=1,c=0,i;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&a1);
	
	while(a>b)
	{
		if(a%b==0)
		c++;
		
		b++;
	}
	b=1;
	
	while(a1>b)
	{
		if(a1%b==0)
		c++;
		
		b++;
	}
	
	if(c==2)
	printf("Co-Prime ");
	
	else
	printf("Not Co-Prime ");
	
	getch();
	

	
}
