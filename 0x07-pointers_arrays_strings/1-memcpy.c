#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: parameter destination
 * @src: parameter source
 * @n: size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
