#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - This program will assign a random number
* to the variable n each time it is executed
* And print the last digit of the number stored in the variable n
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    int last_digit = (n % 10)
	if (last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (n < 6 && !=0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}