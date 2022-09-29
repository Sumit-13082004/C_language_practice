#include<stdio.h>
main()
{
	char str[20][50],b[50];
	int i,a,c=0,k=0,num,j;
	printf("Enter the number of string:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("Enter a string:");
		fflush(stdin);
		gets(str[i]);
	}
	
	for(i=0;i<num;i++)
	{
		
	j=0;
		do
		{
			if(str[i][j]==0&&i+1!=num)
			b[k]=32;
			
			else
			b[k]=str[i][j];
			
			j++;
			k++;
			
		}while(str[i][j-1]!=0);	
		
	}
	printf("The new string is %s",b);
	getch();
}
