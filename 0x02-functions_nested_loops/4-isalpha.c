#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character or ascii code
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90))
		result = 1;

	else
		result = 0;

	return (result);
}
