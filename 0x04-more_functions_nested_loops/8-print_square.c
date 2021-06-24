#include "holberton.h"
/**
 * print_square - print a square
 * Return: 0
 */

void print_square(int size)
{
	char x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
