#include<stdio.h>
main()
{
	int a,b=1,c=0,i=3,num=0;
	printf("Enter how many prime number want to print:");
	scanf("%d",&a);
	
	printf("The prime numbers are:");
	
	while(a!=num)
	{
		b=1;
		while(i>b)
		{
			if(i%b==0)
			c++;
			
			b++;
	    }   
	    
	    if(c==1)
	    {
	    	printf("%d ",i);
	    	num++;
		}
	    
	    i++;
	    c=0;
	}
	getch();
}
