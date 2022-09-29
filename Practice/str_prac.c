#include<stdio.h>
#include<string.h>
main()
{
	char str[30],rev[30];
	int i;
	fgets(str,30,stdin);
	printf("%s",&str[0]);
	rev=strrev(str);
	printf("%s",rev);
	getch();
}
