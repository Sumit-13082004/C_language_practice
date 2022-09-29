#include<stdio.h>
main()
{
	float len,bre,hei;
	printf("Enter the length, breadth and height:");
	scanf("%f%f%f",&len,&bre,&hei);
	
	printf("The volume of cuboid is %g",len*bre*hei);
	getch();
}
