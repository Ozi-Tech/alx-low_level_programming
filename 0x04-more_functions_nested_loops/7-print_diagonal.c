#include "holberton.h"
/**
 * print_line - function that draws a line
 * Return: 0
 */

void print_line(int n)
{
	int x;
	int y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
			_putchar(' ')
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
