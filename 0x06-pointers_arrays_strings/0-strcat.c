#include "holberton.h"
/**
 * _strcat - concatenates 2 strings
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src);
{
	int a;
	int b;

	for (a = 0; dest[a] != "\0"; a++)
	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
