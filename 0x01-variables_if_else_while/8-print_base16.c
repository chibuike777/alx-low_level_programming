#include<stdio.h>

/**
 * main - prints 1-16
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 16)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
