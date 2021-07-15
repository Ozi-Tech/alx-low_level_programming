#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter integer
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	void *ptr = malloc(b);
	if (*ptr == NULL)
	{
		exit(98);
	}
	return (*ptr);
}
