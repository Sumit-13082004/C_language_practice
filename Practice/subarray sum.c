#include<stdio.h>
main()
{
	int arr[50],a,b,c,size,i,j,s=0,ans[50];
	printf("Enter the size:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]); 
	}
	
	for(i=0;i<size-1;i++)
	{
		c=arr[i];
		for(j=i+1;j<size;j++)
		{
			c=c+arr[j];
				
				if(c<=arr[size-1])
				{
					for(b=size-1;b>j;b--)
					{
						if(c==arr[b])
						{
							ans[s]=j;
							s++;
						}
					}
				}
				
				else
				break;	
		}
	}
	printf("%d",s);
		
	 
	
}
