#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer parameter
 * @c: parameter character
 * Return:
 */

char *_strchr(char *s, char c)
{
	int i;
	int n;

	while (s[i])
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		if (s[n] == 'c')
		{
			s = &s[n];
			break;
		}
		if (s[n] == '\0')
		{
			s = '\0';
		}
	}
	return (s);
}
