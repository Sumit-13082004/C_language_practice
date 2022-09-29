#include<stdio.h>
main()
{
	int arr[20],a,b,c=1,i,k=0,j;
	int val[20];
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a-1;i++)
	{
			if(arr[i]<arr[i+1])
			{
				c++;
			}
			
			else
			{
				val[k]=c;
				k++;
				c=1;
			}
	}
	b=0;
	

	for(i=0;i<k;i++)
	{
		
		if(val[b]<val[i+1])
		{
			val[b]=val[i+1];
		}
		
	}
	j=val[b];
	printf("%d",j);
}
