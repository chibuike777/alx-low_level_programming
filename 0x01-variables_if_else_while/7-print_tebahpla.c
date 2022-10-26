#include<stdio.h>

/**
 * main - prints alphabet backwards
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
