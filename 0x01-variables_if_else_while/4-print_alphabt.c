#include<stdio.h>
/**
 * main - print all letters except q and e
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		if (n <= 'e' || 'q')
		{
			n++;
		}
		else
		{
			putchar('n');
			n++;
		}
		putchar('\n');
		return (0);
	}
}
