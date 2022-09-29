#include<stdio.h>
int* ret(void);
main()
{
	int *arr,i,j;
	arr=ret();
	printf("%d",arr[4]);
	
}
int* ret(void)
{
	int arr[44],i;
	for(i=0;i<9;i++)
	scanf("%d",arr[i]);
	return &arr[0];
}
