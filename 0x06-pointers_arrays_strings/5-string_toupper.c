#include "holberton.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer parameter character
 * Return: 0
 */

char *string_toupper(char *s)
{
	char *s;
  	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
  	return 0;
}
