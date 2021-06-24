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
	int i, t, f;

	for (i = 1; i <= 100; i++)
	{
		t = i % 3;
		f = i % 5;

		if (t == 0 && f == 0)
			printf("FizzBuzz");
		else if (f == 0)
			printf("Buzz");
		else if (t == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}
