#include<stdio.h>
#include<string.h>
main()
{
	char str[20],str2[20];
	int a,c=0,i;
	printf("Enter the first string:");
	gets(str);
	
	printf("Enter the second string:");
	gets(str2);
	
	strrev(str);

	for(i=0;str2[i];i++)
	{
		if(str[i]!=str2[i])
		c++;
	}
	
	if(c==0)
	printf("These are Angram string");
	
	else
	printf("These are not Angram string");
	getch();
}
