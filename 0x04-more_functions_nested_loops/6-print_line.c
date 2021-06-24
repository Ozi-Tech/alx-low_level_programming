#include "holberton.h"
/**
 * print_line - function that draws a line
 * Return: 0
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
