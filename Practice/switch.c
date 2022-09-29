#include<stdio.h>
main()
{
	int a,i;
	while(1)
	{
		system("cls");
		printf("\nPress 'a' for Adition\nPress 'b' for Subtraction\nPress 'c' for Multpication\n");
		printf("Press 'd' for Division\nPress 'e' for Exit\n\n");
		
		printf("Enter your choice:");
		scanf("%c",&a);
		
		if(a=='e')
		break;
		
		switch(1)
		{
			case 'a':
				{
					int num,num2,sum;
					printf("Enter two number:");
					scanf("%d %d",&num,&num2);
					printf("The sum is %d",sum=num+num2);
					break;	
				}
			case 'b':
				{
					int num,num2,sub;
					printf("Enter two number:");
					scanf("%d %d",&num,&num2);
					printf("The subtraction is %d",sub=num-num2);
					break;
				}
			case 'c':
				{
					int num,num2,mul;
					printf("Enter two number:");
					scanf("%d %d",&num,&num2);
					printf("The multipication is %d",mul=num*num2);
					break;
				}
			case 'd':
				{
					float num,num2;
					float div;
					printf("Enter two number:");
					scanf("%g %g",&num,&num2);
					printf("The division is %g",div=num/num2);
					break;
				}
			default :
				printf("Enter right choice");
				break;
		}
		getch();
		
	}
	getch();
		
}
