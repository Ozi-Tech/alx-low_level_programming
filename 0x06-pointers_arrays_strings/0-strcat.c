#include "holberton.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: pointer parameter destination
 * @src: pointer parameter source
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
