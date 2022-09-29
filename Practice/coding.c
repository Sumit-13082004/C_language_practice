#include<stdio.h>
main()
{
	char arr[50];
	int ele,i,k,a,b,ran,ans=0;
	
	printf("Enter the number of element:");
	scanf("%d",&ele);
	
	printf("Enter the unit:");
	scanf("%d",&k);
	
	for(i=0;i<ele;i++)
	{
		scanf("%c",&arr[i]);
	}
	
	for(i=0;i<ele;i++)
	{
		if(arr[i]=='P')
		{
			a=k+i;
			b=i-k;
				
				if()
				for(ran=i;ran<=a;ran++)
				{
					if(ran=='T')
					ans++;
				}
				
				if(b>0)
				{
					for(ran=i;ran<=b;ran--)
					{
						if(ran=='T')
						ans++;
					}
				}
				
				
				
				
				
				
				
				
				
				
				
		}
	}
	
}
