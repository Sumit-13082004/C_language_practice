#include<stdio.h>
#include<string.h>
char* Up_case(char*);
main()
{
	char str[50],i,*a;
	printf("Enter anything:");
	gets(str);	
	
	a=Up_case(str);
	
	printf("The Upper case is %s",a);
}
char* Up_case(char b[])
{
	int a,i;
	
	for(i=0;b[i];i++)
	{
		if(b[i]>=97&&b[i]<=122)
		b[i]=b[i]-32;
	}
	return b;
}

