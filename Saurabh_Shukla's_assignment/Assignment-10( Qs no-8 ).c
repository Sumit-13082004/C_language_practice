#include<stdio.h>
int sum_even_nat(int);
main()
{
	int a,t;
	printf("Enter the number:");
	scanf("%d",&a);
	
	t=sum_even_nat(a*2);
	printf("%d",t);
	getch();
	
}
int sum_even_nat(int num)
{
	int s;
	
	if(num>0)
	{
		s=sum_even_nat(num-1);
		
		if(num%2==0)
		s=s+num;
		
		return s;
	}
	

}
