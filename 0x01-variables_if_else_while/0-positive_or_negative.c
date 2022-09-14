#include <stdlib.h>
#include <time.h>

/* more headers goes there */
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
	/* your code goes there */
	if(n > 0)
	{
		printf("%d is positive\n");
	}else if(n < 0)
	{
		printf("%d is negative\n");
	}else if(n ==0)
	{
		printf("%d is zero\n");
	}
	
	return (0);
}