#include<stdio.h>
main()
{
	char str[50],t[50];
	int i,c=0,k=1,j;
	gets(str);
	
	t[0]=str[0];
	for(i=1;str[i];i++)
	{
		
		c=0;
		for(j=0;t[j];j++)
		{
			if(t[j]==str[i]||t[j]-32==str[i]||t[j]+32==str[i])
			{
				c++;
				break;
			}
		}
		
		if(c==0)
		{
			t[k]=str[i];
			k++;
		}
		
	}
	printf("%s",t);
	
}
