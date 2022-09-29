#include<stdio.h>
main()
{
	int a,a1,b,c,i;
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&a1);
	
	printf("Prime numbers between %d and %d:",a,a1);
	
	for(i=a+1;i<a1;i++)
	{
		b=1;
		c=0;
		
		while(i>b)
		{
			if(i%b==0)
			c++;
			
			b++;
		}
		
		if(c==1)
		printf("%d ",i);
		
	}
	getch();
	
}
