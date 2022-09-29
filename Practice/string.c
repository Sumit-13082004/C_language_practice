#include<stdio.h>
#include<string.h>
main()
{
	char str[20],you[20];
	int i;
	printf("Enter your name:");
	gets(&str[0]);
	i=strlen(str);
	printf("The length of the string is %d",i);
	strcpy(you,strupr(str));
	printf("The second string %s",you);
	
	getch();
}
