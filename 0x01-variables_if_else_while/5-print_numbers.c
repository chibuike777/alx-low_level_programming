#include<stdio.h>

/**
 * main - print 0-9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	return (0);
}
