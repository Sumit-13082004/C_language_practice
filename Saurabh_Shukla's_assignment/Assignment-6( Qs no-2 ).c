#include<stdio.h>
main()
{
	int a,b,c,i;
	printf("The prime numbers under 100:");
	
	for(i=1;i<100;i++)
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
