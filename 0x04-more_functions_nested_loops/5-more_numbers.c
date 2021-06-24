#include "holberton.h"
/**
 * main - print numbers from 0 - 9
 * Return: 0
 */

int main(void)
{
	int x;
    int i;

    for (i = 0; i <= 10; i++)
    {
        for (x = 0; x <=14; x++)
        {
            _putchar(x + '0');
        }
	    _putchar('\n');
    }
    _putchar('\n');

	return (0);
}
