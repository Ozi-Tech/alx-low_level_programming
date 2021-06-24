#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: character or ascii code
 * Return: 0 or 1
 */

int _islower(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;

	else
		result = 0;

	return (result);
}
