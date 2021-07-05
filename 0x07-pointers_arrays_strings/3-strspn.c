#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer parameter string
 * @accept: pointer parameter string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n;
	int x = 0;
	int y = 0;
	unsigned int count = 0;

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
				count++;
				break;
			}
			if (!accept[j])
			{
				i = x;
			}
		}
	}
	return (count);
}
