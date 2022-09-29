#include<stdio.h>
main()
{
	int arr[]={500,100,50,20,10,1},a,b,c,i,j;
	printf("Enter the amount:");
	scanf("%d",&a);
	
	while(a>0)
	{
		
		for(i=0;i<6;i++)
		{
			if(arr[i]<=a)
			{
				b=arr[i];
				break;
			}
		}
		
		j=a; 
		a=a%b;
		c=j/b;
		printf("%d*%d=%d\n",c,b,c*b);
	}
	getch();
}
