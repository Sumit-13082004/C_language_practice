#include<stdio.h>
main()
{
	int arr[50],ans[50],peo,j=0,i,k;
	printf("Enter the number of people in this apartment:");
	scanf("%d",&peo);
	
	printf("Enter the previous year contribution:\n");
	for(i=0;i<peo;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<peo;i++)
	{
		if(2+i<peo)
		ans[i]=arr[1+i]+arr[2+i];
		
		else
		{
			if(j==0)
			ans[i]=arr[1+i]+arr[0];
			
			else
			ans[i]=arr[0]+arr[1];
			
			j++;
		}
		
	}
	printf("The contribution will be:");
	
	for(i=0;i<peo;i++)
	printf("%d ",ans[i]);
}
