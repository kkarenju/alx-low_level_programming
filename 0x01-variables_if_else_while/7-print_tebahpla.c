#include <stdio.h>

/**
 * main: print letters in reverse
 * using putchar
 * return: always zero on success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter =< 'a'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
