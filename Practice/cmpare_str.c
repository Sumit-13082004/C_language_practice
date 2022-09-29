#include<stdio.h>
#include<string.h>
int str_cmp(char*,char*);
main()
{
	char str[20][50],t[50];
	int i,a,b,c,num,j;
	printf("Enter the number of string:");
	scanf("%d",&num);
	fflush(stdin);
	
	for(i=0;i<num;i++)
	{
		printf("Enter a string:");
		gets(str[i]);
	}
	
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a=str_cmp(str[i],str[j])==1)
			{
				strcpy(t,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],t);
			}
		}
	}
	for(i=0;i<num;i++)
	{
		if(i+1!=num)
		printf("%s>",str[i]);
		
		else
		printf("%s",str[i]);
	}
	
	

	getch();
}
int str_cmp(char a[],char b[])
{
	int i,c,len,len2;
	len=strlen(a);
	len2=strlen(b);
	
	for(i=0;len>len2?b[i]:a[i];i++)
	{
		if(a[i]>b[i])
		return 1;
		
		if(a[i]<b[i])
		return -1;
	}
	
	if(len>len2)
	return 1;
	
	if(len<len2)
	return -1;
	
	return 0;
}
