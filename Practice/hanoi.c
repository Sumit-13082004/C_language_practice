#include<stdio.h>
void toh(int,char,char,char);
main()
{
	int num;
	char sour='S',temp='T',dest='D';
	printf("Enter the number of disks:");
	scanf("%d",&num);
	
	toh(num,sour,temp,dest);
	getch();
}

void toh(int num,char a,char b,char c )
{
	if(num>0)
	{
		toh(num-1,a,c,b);
		printf("Move disk %d:%c->%c\n",num,a,c);
		toh(num-1,b,a,c);
	}
}
