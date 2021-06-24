#include "holberton.h"
#include <stdio.h>

/**
 * main - print numbers 1 to 100
 * for multiples of 3 print Fizz instead
 * for multiples of 5 print Buzz instead
 * for multiples of both 3 and 5, print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');

	return (0);
}
