#include "holberton.h"
/**
 * _strncat - _strcat but with a byte limit
 * @dest: pointer parameter destination
 * @src: pointer parameter source
 * @n: parameter integer
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++);
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
