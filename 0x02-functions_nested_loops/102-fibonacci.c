#include <stdio.h>
/**
 * main - to print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int t1 = 1;
	int t2 = 2;
	int nextTerm = t1 + t2;

	printf("%d, ", t1);

	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", t2);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
