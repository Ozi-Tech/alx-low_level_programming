#include <stdio.h>
/**
 * main - to print the first 50 fibonacci numbers
 * return: 0
 */

int main(void)
{
	int i;
	int n = 50;
	int t1 = 1;
	int t2 = 2;
	int nextTerm = t1 + t2;

	printf("%d, %d, ", t1, t2);

	for (i = 1; i <= n; i++)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
