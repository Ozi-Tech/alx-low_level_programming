#include <stdio.h>

/**
 *main - prints its name
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
