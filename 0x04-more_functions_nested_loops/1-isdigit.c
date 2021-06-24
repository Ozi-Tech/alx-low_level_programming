#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * (0 through 9)
 * @c: character or ascii code
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
		result = 1;

	else
		result = 0;

	return (result);
}
