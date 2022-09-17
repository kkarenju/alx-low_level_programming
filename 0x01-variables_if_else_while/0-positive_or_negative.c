#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * Main: This program will assign a random number to the variable n each time it is executed. 
 * Description:  print whether the number stored in the variable n is positive or negative.
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if else statments */
	if(n > 0)
		printf("%d is positive\n", n);
	else if(n < 0)
		printf("%d is negative\n", n);
	else if(n ==0)
		printf("%d is zero\n", n);
	return (0);
}
