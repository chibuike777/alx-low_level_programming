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

	int m;

	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %i is %i and is 0", n, m);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, m);
	}
	return (0);
}
