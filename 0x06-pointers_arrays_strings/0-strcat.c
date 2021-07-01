#include "holberton.h"
/**
 * _strcat - concatenates 2 strings
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src);
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
