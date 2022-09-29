#include<stdio.h>
main()
{
	int a1[20][50],a2[20][50],ans[20][50],row,col,i,j;
	printf("Enter the row and col:");
	scanf("%d%d",&row,&col);
	
	printf("Enter the fist matrix:");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("Enter teh sec matrix:");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			ans[i][j]=a1[i][j]+a2[i][j];
		}
	}
	
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",ans[i][j]);	
		}
		
	printf("\n");
	}
	
	getch();
	
	
	
}
