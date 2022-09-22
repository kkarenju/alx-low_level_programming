#include <stdio.h>

/**
 * main: print single digits of base 10
 * return: zero on success
 */
int main(void)
{
	char n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
