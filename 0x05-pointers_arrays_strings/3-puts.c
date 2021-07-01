#include "holberton.h"

/**
 *_puts - display string data
 *@str: pointer char
 *Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
