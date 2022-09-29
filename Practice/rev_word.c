#include<stdio.h>
#include<string.h>
void rem_extra_space_midd(char*);
main()
{
	char str[50],arr[50];
	int i=0,a=0,j,b,c=0,l,k=0,t,len,cou=0;
	printf("Enter a sentence:");
	gets(str);
	
	len=strlen(str);
	j=len-1;
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]==32&&str[j]==32&&cou==0)
		{
			j--;
			continue;
		}
		
		if(str[i]!=32&&str[j]==32&&cou==0)
		{
			i--;
			j--;
			continue;
		}
		
		if(str[i]==32&&str[j]!=32&cou==0)
		{
			j++;
			j--;
			continue;
		}
		
			
			b=str[j];
			str[j]=str[i];
			str[i]=b;
			cou++;
			j--;
	}

	i=0;
	
	do
	{
		if(str[i]!=32||str[i]!=0)
		arr[c]=str[i];
	
		if(str[i]==32||str[i]==0)
		{
			a=c;
			
			for(j=0;j<a/2;j++)
			{
				b=arr[c-1];
				arr[c-1]=arr[j];
				arr[j]=b;
				c--;
			}
			l=i;
			for(j=a-1;j>=0;j--)
			{
				str[l-1]=arr[j];
				l--;
			}
			c=0;
		}
		
		if(str[i]!=32)
		c++;
		
		i++;
		
	}while(str[i-1]);
	
	rem_extra_space_midd(str);
	printf("The ne string is:%s",str);
	getch();
}
void rem_extra_space_midd(char b[])
{
	int i,j,a,c=0;
	for(i=0;b[i];i++)
	{
		if(b[i]==32&&b[i+1]==32&&b[i-1]!=32||c>0&&b[i]==32)
		{
			for(j=i+1;b[j];j++)
			{
				b[j]=b[j+1];
			}
			c++;
			continue;
		}
		c=0;
	}
		
}
