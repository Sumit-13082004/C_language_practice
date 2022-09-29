#include<stdio.h>
main()
{
	int arr[]={5,10,23,45,62,63,100,123,345,443};
	int a,b,i,num,key,val=10,high,low;
	high=val-1;
	low=0;
	
	for(i=0;i<=9;i++)
	printf("%d ",arr[i]);
	
	printf("\nEnter the number want to search:");
	scanf("%d",&num);
	while(high>=low)
	{
		key=(high+low)/2;
		if(num==arr[key])
		{
			printf("Found the number");
			break;
		}
		else if(num<arr[key])
		{
			high=key-1;
		}
		else if(num>arr[key])
		{
			low=key+1;
		}
	}
	if(high<low)
	printf("Not Found");
}
