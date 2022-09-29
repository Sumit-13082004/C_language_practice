#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],a1[50][50];
	int cou[40],t[20];
	int i,j,a=0,b,c=0,num=0,n,m,k,val,res;
	
	scanf("%d %d",&n,&m);
	fflush(stdin);
	gets(s1);
	
	for(i=0;i<n;i++)
	{
		gets(a1[i]);
	}
	
	for(i=0;s1[i];i++)
	{
		num++;
	}
	
	for(k=0;k<num;k++)
	{
		for(i=0;i<n;i++)
		{
			c=0;
			for(j=0;a1[i][j];j++)
			{
				if(s1[k]==a1[i][j])
				{
					cou[k]=i;
					c++;
					break;
				}
			}
			if(c>0)
			break;
		}
	}
	
	val=cou[0];
	
	for(i=0;i<num-1;i++)
	{
		if(val<cou[i+1])
		val=cou[i+1];
	}
	
	printf("%d",val+1);
		
	
	
	
	
	
}
