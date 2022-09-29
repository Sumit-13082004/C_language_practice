#include<stdio.h>
#include<string.h>
main()
{
	int a,i,b,c;
	char str[50];
	
	gets(str);
	c=strlen(str);
	
	a=c/2;
	for(i=0;i<a;i++)
	{
		b=str[i];
		str[i]=str[c-(i+1)];
		str[c-(i+1)]=b;
	}
	printf("The reverse is %s",&str[0]);
	
	getch();
}
