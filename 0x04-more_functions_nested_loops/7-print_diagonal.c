#include "holberton.h"
/**
 * print_line - function that draws a line
 * Return: 0
 */

void print_line(int n)
{
	int i;
	int u;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (u = 0; u < i; u++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
