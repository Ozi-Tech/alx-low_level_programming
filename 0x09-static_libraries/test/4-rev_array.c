#include "holberton.h"
/**
 * reverse_array- reverses the content of an array of integers
 * @a: pointer to array name
 * @n: number of integers in array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int f = 0;
	int l = n - 1;
	char tmp;

	for (; l > f; l--, f++)
	{
		tmp = a[f];
		a[f] = a[l];
		a[l] = tmp;
	}
}
