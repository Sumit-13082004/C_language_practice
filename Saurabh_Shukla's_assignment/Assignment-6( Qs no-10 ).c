#include<stdio.h>
main()
{
	int a,b=1,i,c=0;
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("The prime factors are:");
	
	for(i=3;i<=a;i++)
	{
		if(a%i==0)
		{
			b=1;
			while(i>b)
			{
				if(i%b==0)
				c++;
				
				b++;
			}
			
			if(c==1)
			printf("%d ",i);
		}
		c=0;
	}
	getch();
}
