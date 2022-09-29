#include<stdio.h>
void input(int*,int);
void display(int*,int);
void sort(int*,int);
main()
{
	int arr[50],num,i;
	printf("How many number:");
	scanf("%d",&num);
	input(arr,num);
	display(arr,num);
	sort(arr,num);
	display(arr,num);
}
void sort(int *p,int a)
{
	int i,j,c;
	for(i=0;i<a-1;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(*(p+i)>*(p+j))
			{
				c=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=c;
			}
		}
	}
}
void display(int *p,int a)
{
	int i;
	printf("The numbers are:");
	for(i=0;i<a;i++)
	{
		printf("%d ",*(p+i));
	}
}
void input(int *p,int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("Enter a number:");
		scanf("%d",(p+i));
		
	}
}
