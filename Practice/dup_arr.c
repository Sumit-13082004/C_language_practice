#include<stdio.h>
void sort_arr(int*,int);
int dup_arr(int*,int);
main()
{
	int arr[50],size,i,size1;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	sort_arr(arr,size);
	size1=dup_arr(arr,size);
	
	for(i=0;i<size-size1;i++)
		printf("%d ",arr[i]);
}
int dup_arr(int b[],int a)
{
	void rem_dup(int*,int*,int,int);
	
	int i,c=0,d[10];
	for(i=0;i<a-1;i++)
	{
		if(b[i]==b[i+1])
		{
			d[c]=i;
			c++;
		}
		
	}
	if(c>0)
	rem_dup(b,d,c,a);
	
	return c;
}
void rem_dup(int b[],int d[],int c,int a)
{
	int i,j,k;
	k=0;
	
	for(i=0;i<a-1;i++)
	{
		if(d[k]==i)
		{
			for(j=i;j<a-1;j++)
			{
				b[j]=b[j+1];
			}
			k++;
		}
		
		if(k>c)
		break;	
	}
}

void sort_arr(int b[],int a)
{
	int i,j,c;
	for(i=0;i<a-1;i++)
	{
		for(j=i;j<a;j++)
		{
			if(b[i]>b[j])
			{
				c=b[i];
				b[i]=b[j];
				b[j]=c;
			}	
		}
	}
}
