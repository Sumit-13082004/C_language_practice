#include<stdio.h>
int rem_dig(int,int);
main()
{
	int a,a1,t;
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter the digit you want to remove:");
	scanf("%d",&a1);
	
	t=rem_dig(a,a1);
	printf("The number is %d",t);
	
	printf("\nEnter a digit you want to remove from %d:",t);
	scanf("%d",&a);
	t=rem_dig(t,a);
	printf("The number is %d",t);
	
	getch();
}

int rem_dig(int r,int s)
{
	int b,c=0,i=1;	
	
	while(r>0)
	{
		b=r%10;
		if(b!=s)
		{
			c=c+(b*i);
			i*=10;
		}	
		r/=10;
	}
	return c;
	
}
