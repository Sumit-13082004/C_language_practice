#include<stdio.h>
#include<string.h>
char* str_rev(char*);
main()
{
	char str[10];
	char *p;
	gets(str);
	p=str_rev(str);
	printf("The new %s",str_rev(str));
	getch();
}
char* str_rev(char b[])
{
	int t,i,a,c;
	t=strlen(b);
	
	for(i=0;i<t/2;i++)
	{
		c=b[(t-1)-i];
		b[(t-1)-i]=b[i];
		b[i]=c;
	}
	return b;
}																	
