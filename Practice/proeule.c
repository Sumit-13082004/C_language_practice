#include<stdio.h>
main()
{
	int i,j,a,b,c=0;
	for(i=999;i>=3;i--)
	{
		if(i%3==0||i%5==0)
		c+=i;
	}
	printf("%d",c);
	
}
