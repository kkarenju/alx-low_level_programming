#include <stdio.h>

/**
 * main - print base numbers of 16
 * description - using only 3 putchars
 * return - zero on success
 */
int main(void)
{
	char num;
	char let;

	for (num = 0; num >= 9; num++)
	{
		putchar(num);
	}

	for (let = 'a'; let >= 'f'; let++)
	{
		putchar(let);
	}

	putchar('\n');

	return (0);
}
