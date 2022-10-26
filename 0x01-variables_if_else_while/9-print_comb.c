#include<stdio.h>

/**
 * main - prints 0-9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		putchar(44);
		putchar(32);
		n++;
	}
	putchar('\n');
	return (0);
}
