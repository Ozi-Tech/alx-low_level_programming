#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * Return: 1 if c is lowercase,
 * Return: 0 otherewise
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
