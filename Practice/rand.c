/* Program : 25 */
/* Program to write the power(x, n) function */
#include<stdio.h>
#include<conio.h>
/* function prototype declaration */
double power(int x, int n);
void main(void)
{
int a, n;
printf("Enter a, n:");
scanf("%d %d", &a, &n);
printf("\n\n%d to power %d is %lf", a, n, power(a, n));
getch();
} /* end main() */
/* function definition */
double power(int x, int n)
{
double p = 1.0;
if(n >= 0)
 while(n--)
p *= x;
else
 while(n++)
p /= x;
return(p);
}
