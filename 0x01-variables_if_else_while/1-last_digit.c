#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - entry point
 *
 * description - starting point
 * return: always 0 (success)
 * main return value - always 0
 */

/*1-last_digit - prints out the last digit*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
