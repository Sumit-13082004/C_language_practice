/* Program : 3 */
/* Average of n values */
#include<stdio.h>
#include<conio.h>
#define N 10 /* Symbolic Constant */
void main()
{
int count; /* Declaration of */
float sum, average, number; /* Variables */
sum = 0; /* Initialization */
count = 0; /* of Variables*/
while (count < N)
{
scanf("%f", &number);
sum = sum + number;
count = count + 1;
} /* end while */
average = sum/N;
printf("N = %d\tSum = %f", N, sum);
printf("\tAverage = %f", average);
getch();
} /* end main() */

