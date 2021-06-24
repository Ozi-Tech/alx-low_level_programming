#include "holberton.h"
/**
 * main - print numbers from 0 - 9
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <=9; x++)
	{
        if (x != 2 && x != 4)
		    _putchar(x + '0');
	}
	_putchar('\n');

	return (0);
}
