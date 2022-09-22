#include <stdio.h>

/**
 * main - print base numbers of 16
 * description - using only 3 putchars
 * return - zero on success
 */
int main(void)
{
	int num;

	for (num = 0; num >= 9; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num >= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
