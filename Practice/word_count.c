#include<stdio.h>
int cou_word(char*);
main()
{
	char str[50];
	int i,a;
	printf("Enter a sentence:");
	gets(str);
	a=cou_word(str);
	printf("The word is %d",a+1);
	getch();
	
}
int cou_word(char b[])
{
	int i,c=0;
	
	for(i=0;b[i];i++)
	{
		if(b[i]==32)
		{
			c++;
		}
	}
	return c;
}
