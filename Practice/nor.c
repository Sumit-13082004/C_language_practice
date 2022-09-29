#include<stdio.h>
main()
{
	int a,b,c,d,e,ans;
	printf("Enter the number of 5 subjects:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	ans=a+b+c+d+e;
	
	if(ans>=175)
	{
		if(ans<=250)
		{
			printf("You pass the exam\n");
			printf("You got 'B' grade");
		}
		
		if(ans>250&&ans<=500)
		{
			printf("You pass the exam\n");
			printf("You got 'A'grade");
		}
		
	}
	
	else
	printf("You fail the exam");
	
}
