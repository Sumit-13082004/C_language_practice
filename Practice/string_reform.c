#include<stdio.h>
#include<string.h>
main()
{
	char s1[50][50],s2[50];
	int r,c,a=0,b,n=0,m,i,j=0,num,len,k,l=0;
	
	scanf("%d %d",&r,&c);
	fflush(stdin);
	for(i=0;i<r;i++)
	{
		gets(s1[i]);
	}
	gets(s2);
	len=strlen(s2);
	
	
		for(i=0;i<r;i++)
		{
			num=strlen(s1[i]);
			b=j+num;
			
			for(j=a;j<b;j++)
			{
				if(s2[j]!=s1[i][k])
				break;
				
				k++;
				
			}
			if(j==b)
			{
				i=-1;
				a=j;
			}	
			else
			{
				j=a;
			}
			
			if(i==r-1&&j!=b)
			{
				printf("-1");
				break;
			}
			
			if(j==len)
			{
				printf("1");
				break;
			}
			
			k=0;
		}
	
}
