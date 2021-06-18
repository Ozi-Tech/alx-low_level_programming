#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - This program will assign a random number
* to the variable n each time it is executed
* And print whether the number stored in the
* variable n is positive or negative.
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative", n);
	}
	return (0);
}
