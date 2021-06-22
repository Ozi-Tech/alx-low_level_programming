#include "holberton.h"

/**
 * @c: The character or ascii code
 * _islower - checks for lowercase character
 * Return: 0 or 1
 */

int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
		result = 1;
		
	if (c >= 65 && c <= 90)
		result = 0;
	
	return (result);
}
