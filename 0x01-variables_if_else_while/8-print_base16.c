#include<stdio.h>

/**
 * main - prints 1-16
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n, m;

	n = 0;
	m = 'a';
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (m <= 'f')
	{
		putchar(n);
		m++;
	}
	putchar('\n');
	return (0);
}
