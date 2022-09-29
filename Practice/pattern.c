#include<stdio.h>
main()
{
	int a,i,j,b,c;
	printf("Enter the row:");
	scanf("%d",&a);
	
	
	for(i=0;i<a;i++)
	{
		c=0;
		printf("\t\t\t\t");
		for(j=1;j<=a+(a-1);j++)
		{
			if(j>=a-i&&j<=a+i&&c==0)
			{
				printf("*");
				c++;
			}
			
			else
			{
				printf(" ");
				c=0;
			}
		}
		printf("\n");
	}
	getch();
}
