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

	for (i = 1; i <= 50; i++)
	{
		printf("%d, %d, ", t1, t2);
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
