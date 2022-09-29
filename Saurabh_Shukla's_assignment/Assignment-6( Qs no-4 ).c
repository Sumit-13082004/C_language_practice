#include<stdio.h>
main()
{
	int a,b,c,i;
	printf("Enter a number:");
	scanf("%d",&a);
	
	for(i=a+1;i>a;i++)
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
		{
			printf("The Prime number is %d",i);
			break;
		}
	}
	getch();
}
