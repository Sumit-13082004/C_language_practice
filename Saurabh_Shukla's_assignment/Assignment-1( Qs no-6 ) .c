#include<stdio.h>
main()
{
	float rad,ans;
	printf("Enter the radius of Circle:");
	scanf("%f",&rad);
	
	ans=3.14*(rad*rad);
	printf("The area of Circle is %g",ans);
	
	getch();
}
