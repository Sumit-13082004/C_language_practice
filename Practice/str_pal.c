#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int a,b,i=0;
	printf("Enter a string:");
	scanf("%s",str);
	
	a=strlen(str);

	if(str[0]==str[a-1]||str[0]+32==str[a-1]||str[0]-32==str[a-1])
	printf("This string is a Palindrome");
	
	else
	printf("Not Palindrome");	
	
	
}
