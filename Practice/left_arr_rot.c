#include<stdio.h>
main()
{
	int arr[50],i,num,j,a,c,t;
	printf("Enter how many number:");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter number of rotation:");
	scanf("%d",&num);
	
		for(i=0;i<num;i++)
		{
			c=arr[0];
			
			for(j=0;j<a-1;j++)
			{
				arr[j]=arr[j+1];
			}
			
			arr[a-1]=c;
		}
		
		for(i=0;i<a;i++)
			printf("%d ",arr[i]);
	
	getch();
	
	
	
}
