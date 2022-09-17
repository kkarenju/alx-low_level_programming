#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - assign a random number each execution
 * Description: 'print if variable n is positive or negative.'
 * return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if else statments */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
