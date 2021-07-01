#include "holberton.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @a: pointer parameter character
 * Return: 0
 */

char *string_toupper(char *a)
{
	char *a;
  	int i;

  	for (i = 0; a[i]!='\0'; i++)
  	{
  		if(a[i] >= 'a' && a[i] <= 'z')
  		{
  			a[i] = a[i] - 32;
		}
  	}
  	return 0;
}
