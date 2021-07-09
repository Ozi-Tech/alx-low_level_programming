#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer parameter string
 * @accept: pointer parameter string
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;
	int x = 0;
	int y = 0;

	while (s[x])
	{
		x++;
	}
	while (accept[y])
	{
		y++;
	}
	for (i = 0; i < x; i++)
	{
		for (n = 0; n < y; n++)
		{
			if (s[i] == accept[n])
			{
				s = s[i];
				return (s + i);
			}

		}
	}
	s = 0;
	return (s);
}
