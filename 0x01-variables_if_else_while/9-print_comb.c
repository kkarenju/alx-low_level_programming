#include <stdio.h>

/**
 * main - entry point
 * description: print possible combinations of single digit numbers
 * return: zero on success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);

		if (n != 9)
		{
			putchar(', ');
		}
		
	}

	putchar('\n');

	return (0);
}
