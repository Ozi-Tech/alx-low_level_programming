#include "holberton.h"
/**
 * _strcmp -
 * Return:
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int result;

	for (; s1[i] != '\0'; i++);
	for (; s2[j] != '\0'; j++);
	if (i > j)
	{
		result = (i + j);
	}
	else if (i < j)
	{
		result = -(i + j);
	}
	else
		result = 0;
	return (result);
}
