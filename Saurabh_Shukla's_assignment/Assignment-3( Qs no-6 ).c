#include<stdio.h>
main()
{
	int a,b,c,ans;
	printf("Enter the value of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	
	ans=(b*b)-(4*a*c);
	
	if(ans>0)
	printf("The roots are unequal and real");
	
	if(ans<0)
	printf("The roots are imaginary");
	
	if(ans==0)
	printf("The roots are equal and real");
	
	getch();
}
