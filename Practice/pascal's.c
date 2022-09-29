#include<stdio.h>
long long int fact(int);
main()
{
	long int a,b,i,c,j,n=0,r,s;
	printf("Enter the number of row:");
	scanf("%d",&a);
	b=a-1;
	
	for(i=0;i<a;i++)
	{
		c=1;
		printf("\t\t\t");
		r=0;
		
		for(j=0;j<a+b;j++)
		{
			if(j>=b-i&&j<=b+i&&c==1)
			{
				printf("%4d",s=fact(n)/(fact(r)*fact(n-r)));
				c=0;
				r++;
			}
			
			else
			{
				printf("    ");
				c=1;
			}
		}
		printf("\n");
		n++;
	}
	getch();   
}

long long int fact(int t)
{
	long long int i,c=1;
	for(i=1;i<=t;i++)
	c=c*i;
	
	return c;
}
