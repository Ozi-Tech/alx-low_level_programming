#include "holberton.h"
/**
 * _strncpy.c -
 * @dest: pointer parameter to dstination
 * @src: pointer parameter to source
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
