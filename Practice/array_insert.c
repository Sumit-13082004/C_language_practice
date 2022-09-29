#include<stdio.h>
void arr_ins(int*,int);
main()
{
	int arr[50],i,size;
	printf("Enter size of array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d=>%d\n",i,arr[i]);
	}
	arr_ins(arr,size);
	
	for(i=0;i<size+1;i++)
		printf("%d=>%d\n",i,arr[i]);
	getch();
}
void arr_ins(int b[],int a)
{
	int s,i;
	printf("Enter the index where you want to input:");
	scanf("%d",&s);
	
	for(i=a;i>s;i--)
	{
		b[i]=b[i-1];
	}
	printf("Enter the number:");
	scanf("%d",&b[s]);
}
