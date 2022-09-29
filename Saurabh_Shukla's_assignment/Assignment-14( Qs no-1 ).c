#include<stdio.h>
#include<string.h>
main()
{
	char str[50],ch;
	int i,c=0;
	printf("Enter anything:");
	gets(str);
	
	printf("Enter a character you want to count:");
	scanf("%c",&ch);
	
	for(i=0;str[i];i++)
	{
		printf("%c",str[i]);
		
		if(str[i]==ch)
		c++;
	}
	printf("\nThe value is %d",c);
}
