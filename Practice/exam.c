#include<stdio.h>
main()
{
	int a,b=0,c,i,num,val=0;
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		if(num%2==0)
		val=(val*10)+0;
		
		else
		val=(val*10)+1;
		
		num=num/2;
	}
	
	while(val!=0)
	{
		a=val%10;
		b=(b*10)+a;
		val/=10;
	}
	printf("%d",b);
	getch();
	
	
}
