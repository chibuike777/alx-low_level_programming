#include<stdio.h>

/**
 * main - print alphabet caps and small
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n, m;

	n = 'a';
	m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
