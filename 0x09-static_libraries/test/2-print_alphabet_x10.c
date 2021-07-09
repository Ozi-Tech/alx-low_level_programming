#include "holberton.h"
/**
 * print_alphabet_x10 - function that prints the alphabets 10 times,
 * in lowercase, followed by a new line.
 * Return:
 */

void print_alphabet_x10(void)
{
	char ch;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
