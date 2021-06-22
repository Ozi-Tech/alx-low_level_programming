#include "holberton.h"
/**
 * void print_alphabet(void) - function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return:
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
