#include <stdio.h>

/**
 * main: print base 10 numbers
 * without using char
 * return: zero on success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar("%d", n);
	}

	putchar('\n');

	return (0);
}
